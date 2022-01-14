// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/option_defaults_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

OptionDefaultsGenerator::OptionDefaultsGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("option_defaults_header_path",
                           "option_defaults_cc_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status OptionDefaultsGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({"google/cloud/options.h", "google/cloud/version.h"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  HeaderPrint(  // clang-format off
    "\nOptions $service_name$DefaultOptions(Options options);\n");
  //clang-format on

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint(
    "\n#endif  // $header_include_guard$\n");
  return {};
}

Status OptionDefaultsGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n");
  // clang-format on

  // includes
  CcPrint("\n");
  CcLocalIncludes(
      {vars("option_defaults_header_path"), vars("connection_header_path"),
       vars("options_header_path"), "google/cloud/common_options.h",
       "google/cloud/connection_options.h", "google/cloud/grpc_options.h",
       "google/cloud/internal/getenv.h",
       "google/cloud/internal/user_agent_prefix.h", "google/cloud/options.h"});
  CcSystemIncludes({"memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  CcPrint(  // clang-format off
    "\n"
    "namespace {\n"
    "auto constexpr kBackoffScaling = 2.0;\n"
    "}  // namespace\n"
  );
  //  clang-format on

  CcPrint(  // clang-format off
  {{"\n"
    "Options $service_name$DefaultOptions(Options options) {\n"
    "  if (!options.has<EndpointOption>()) {\n"
    "    auto env = internal::GetEnv(\"$service_endpoint_env_var$\");\n"
    "    options.set<EndpointOption>(env && !env->empty() ? *env : \"$service_endpoint$\");\n"
    "  }\n"},
   {[this]{return vars("emulator_endpoint_env_var").empty();}, "",
    "  if (auto emulator = internal::GetEnv(\"$emulator_endpoint_env_var$\")) {\n"
    "    options.set<EndpointOption>(*emulator).set<GrpcCredentialOption>(\n"
    "        grpc::InsecureChannelCredentials());\n"
    "  }\n"},
   {"  if (!options.has<GrpcCredentialOption>()) {\n"
    "    options.set<GrpcCredentialOption>(grpc::GoogleDefaultCredentials());\n"
    "  }\n"
    "  if (!options.has<TracingComponentsOption>()) {\n"
    "    options.set<TracingComponentsOption>(internal::DefaultTracingComponents());\n"
    "  }\n"
    "  if (!options.has<GrpcTracingOptionsOption>()) {\n"
    "    options.set<GrpcTracingOptionsOption>(internal::DefaultTracingOptions());\n"
    "  }\n"
    "  auto& products = options.lookup<UserAgentProductsOption>();\n"
    "  products.insert(products.begin(), google::cloud::internal::UserAgentPrefix());\n"
    "\n"
    "  if (!options.has<$product_namespace$::$retry_policy_name$Option>()) {\n"
    "    options.set<$product_namespace$::$retry_policy_name$Option>(\n"
    "        $product_namespace$::$limited_time_retry_policy_name$(\n"
    "            std::chrono::minutes(30)).clone());\n"
    "  }\n"
    "  if (!options.has<$product_namespace$::$service_name$BackoffPolicyOption>()) {\n"
    "    options.set<$product_namespace$::$service_name$BackoffPolicyOption>(\n"
    "        ExponentialBackoffPolicy(std::chrono::seconds(1),\n"
    "            std::chrono::minutes(5), kBackoffScaling).clone());\n"
    "  }\n"},
   {[this]{return HasLongrunningMethod();},
    "  if (!options.has<$product_namespace$::$service_name$PollingPolicyOption>()) {\n"
    "    options.set<$product_namespace$::$service_name$PollingPolicyOption>(\n"
    "        GenericPollingPolicy<\n"
    "            $product_namespace$::$retry_policy_name$Option::Type,\n"
    "            $product_namespace$::$service_name$BackoffPolicyOption::Type>(\n"
    "            options.get<$product_namespace$::$retry_policy_name$Option>()->clone(),\n"
    "            options.get<$product_namespace$::$service_name$BackoffPolicyOption>()->clone())\n"
    "            .clone());\n"
    "  }\n", ""},
   {"  if (!options.has<$product_namespace$::$idempotency_class_name$Option>()) {\n"
    "    options.set<$product_namespace$::$idempotency_class_name$Option>(\n"
    "        $product_namespace$::MakeDefault$idempotency_class_name$());\n"
    "  }\n"
    "\n"
    "  return options;\n"
    "}\n"}});
            // clang-format on

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
