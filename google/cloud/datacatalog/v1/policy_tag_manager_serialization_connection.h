// Copyright 2022 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_H

#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_retry_traits.h"
#include "google/cloud/datacatalog/v1/internal/policy_tag_manager_serialization_stub.h"
#include "google/cloud/datacatalog/v1/policy_tag_manager_serialization_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using PolicyTagManagerSerializationRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        datacatalog_v1_internal::PolicyTagManagerSerializationRetryTraits>;

using PolicyTagManagerSerializationLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        datacatalog_v1_internal::PolicyTagManagerSerializationRetryTraits>;

using PolicyTagManagerSerializationLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        datacatalog_v1_internal::PolicyTagManagerSerializationRetryTraits>;

/**
 * The `PolicyTagManagerSerializationConnection` object for
 * `PolicyTagManagerSerializationClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PolicyTagManagerSerializationClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `PolicyTagManagerSerializationClient`.
 *
 * To create a concrete instance, see
 * `MakePolicyTagManagerSerializationConnection()`.
 *
 * For mocking, see
 * `datacatalog_v1_mocks::MockPolicyTagManagerSerializationConnection`.
 */
class PolicyTagManagerSerializationConnection {
 public:
  virtual ~PolicyTagManagerSerializationConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request);

  virtual StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `PolicyTagManagerSerializationConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * PolicyTagManagerSerializationClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PolicyTagManagerSerializationConnection`. Expected options are any
 * of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * -
 * `google::cloud::datacatalog_v1::PolicyTagManagerSerializationPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the
 * `PolicyTagManagerSerializationConnection` created by this function.
 */
std::shared_ptr<PolicyTagManagerSerializationConnection>
MakePolicyTagManagerSerializationConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_POLICY_TAG_MANAGER_SERIALIZATION_CONNECTION_H
