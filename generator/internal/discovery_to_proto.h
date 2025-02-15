// Copyright 2023 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_TO_PROTO_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_TO_PROTO_H

#include "generator/internal/discovery_resource.h"
#include "generator/internal/discovery_type_vertex.h"
#include "google/cloud/status_or.h"
#include <nlohmann/json.hpp>
#include <map>
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

StatusOr<std::map<std::string, DiscoveryTypeVertex>> ExtractTypesFromSchema(
    nlohmann::json const& discovery_doc);

std::map<std::string, DiscoveryResource> ExtractResourcesFromSchema(
    nlohmann::json const& discovery_doc, std::string const& default_hostname,
    std::string const& base_path);

Status GenerateProtosFromDiscoveryDoc(std::string const& url,
                                      std::string const& protobuf_proto_path,
                                      std::string const& googleapis_proto_path,
                                      std::string const& output_path);

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_TO_PROTO_H
