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
// source: google/cloud/bigquery/datapolicies/v1/datapolicy.proto

#include "google/cloud/bigquery/internal/data_policy_tracing_stub.h"

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataPolicyServiceTracingStub::DataPolicyServiceTracingStub(
    std::shared_ptr<DataPolicyServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceTracingStub::CreateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
        request) {
  return child_->CreateDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceTracingStub::UpdateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
        request) {
  return child_->UpdateDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceTracingStub::RenameDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
        request) {
  return child_->RenameDataPolicy(context, request);
}

Status DataPolicyServiceTracingStub::DeleteDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
        request) {
  return child_->DeleteDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceTracingStub::GetDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
        request) {
  return child_->GetDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse>
DataPolicyServiceTracingStub::ListDataPolicies(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest const&
        request) {
  return child_->ListDataPolicies(context, request);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataPolicyServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
