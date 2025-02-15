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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#include "google/cloud/managedidentities/v1/managed_identities_connection.h"
#include "google/cloud/managedidentities/v1/internal/managed_identities_connection_impl.h"
#include "google/cloud/managedidentities/v1/internal/managed_identities_option_defaults.h"
#include "google/cloud/managedidentities/v1/internal/managed_identities_stub_factory.h"
#include "google/cloud/managedidentities/v1/internal/managed_identities_tracing_connection.h"
#include "google/cloud/managedidentities/v1/managed_identities_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace managedidentities_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ManagedIdentitiesServiceConnection::~ManagedIdentitiesServiceConnection() =
    default;

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceConnection::CreateMicrosoftAdDomain(
    google::cloud::managedidentities::v1::
        CreateMicrosoftAdDomainRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::Domain>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
ManagedIdentitiesServiceConnection::ResetAdminPassword(
    google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceConnection::ListDomains(
    google::cloud::managedidentities::v1::
        ListDomainsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::managedidentities::v1::Domain>>();
}

StatusOr<google::cloud::managedidentities::v1::Domain>
ManagedIdentitiesServiceConnection::GetDomain(
    google::cloud::managedidentities::v1::GetDomainRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceConnection::UpdateDomain(
    google::cloud::managedidentities::v1::UpdateDomainRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::Domain>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::managedidentities::v1::OpMetadata>>
ManagedIdentitiesServiceConnection::DeleteDomain(
    google::cloud::managedidentities::v1::DeleteDomainRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::OpMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceConnection::AttachTrust(
    google::cloud::managedidentities::v1::AttachTrustRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::Domain>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceConnection::ReconfigureTrust(
    google::cloud::managedidentities::v1::ReconfigureTrustRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::Domain>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceConnection::DetachTrust(
    google::cloud::managedidentities::v1::DetachTrustRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::Domain>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::managedidentities::v1::Domain>>
ManagedIdentitiesServiceConnection::ValidateTrust(
    google::cloud::managedidentities::v1::ValidateTrustRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::managedidentities::v1::Domain>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<ManagedIdentitiesServiceConnection>
MakeManagedIdentitiesServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ManagedIdentitiesServicePolicyOptionList>(
      options, __func__);
  options =
      managedidentities_v1_internal::ManagedIdentitiesServiceDefaultOptions(
          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      managedidentities_v1_internal::CreateDefaultManagedIdentitiesServiceStub(
          background->cq(), options);
  return managedidentities_v1_internal::
      MakeManagedIdentitiesServiceTracingConnection(
          std::make_shared<managedidentities_v1_internal::
                               ManagedIdentitiesServiceConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_v1
}  // namespace cloud
}  // namespace google
