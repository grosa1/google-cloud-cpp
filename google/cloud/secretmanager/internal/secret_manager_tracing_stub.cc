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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/secretmanager/v1/service.proto

#include "google/cloud/secretmanager/internal/secret_manager_tracing_stub.h"

namespace google {
namespace cloud {
namespace secretmanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecretManagerServiceTracingStub::SecretManagerServiceTracingStub(
    std::shared_ptr<SecretManagerServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::secretmanager::v1::ListSecretsResponse>
SecretManagerServiceTracingStub::ListSecrets(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::ListSecretsRequest const& request) {
  return child_->ListSecrets(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingStub::CreateSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::CreateSecretRequest const& request) {
  return child_->CreateSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::AddSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::AddSecretVersionRequest const& request) {
  return child_->AddSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingStub::GetSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::GetSecretRequest const& request) {
  return child_->GetSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingStub::UpdateSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::UpdateSecretRequest const& request) {
  return child_->UpdateSecret(context, request);
}

Status SecretManagerServiceTracingStub::DeleteSecret(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DeleteSecretRequest const& request) {
  return child_->DeleteSecret(context, request);
}

StatusOr<google::cloud::secretmanager::v1::ListSecretVersionsResponse>
SecretManagerServiceTracingStub::ListSecretVersions(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::ListSecretVersionsRequest const&
        request) {
  return child_->ListSecretVersions(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::GetSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::GetSecretVersionRequest const& request) {
  return child_->GetSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
SecretManagerServiceTracingStub::AccessSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
        request) {
  return child_->AccessSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::DisableSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
        request) {
  return child_->DisableSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::EnableSecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
        request) {
  return child_->EnableSecretVersion(context, request);
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::DestroySecretVersion(
    grpc::ClientContext& context,
    google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
        request) {
  return child_->DestroySecretVersion(context, request);
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecretManagerServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_internal
}  // namespace cloud
}  // namespace google
