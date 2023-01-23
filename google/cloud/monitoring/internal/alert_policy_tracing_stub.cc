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
// source: google/monitoring/v3/alert_service.proto

#include "google/cloud/monitoring/internal/alert_policy_tracing_stub.h"

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AlertPolicyServiceTracingStub::AlertPolicyServiceTracingStub(
    std::shared_ptr<AlertPolicyServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::monitoring::v3::ListAlertPoliciesResponse>
AlertPolicyServiceTracingStub::ListAlertPolicies(
    grpc::ClientContext& context,
    google::monitoring::v3::ListAlertPoliciesRequest const& request) {
  return child_->ListAlertPolicies(context, request);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingStub::GetAlertPolicy(
    grpc::ClientContext& context,
    google::monitoring::v3::GetAlertPolicyRequest const& request) {
  return child_->GetAlertPolicy(context, request);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingStub::CreateAlertPolicy(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateAlertPolicyRequest const& request) {
  return child_->CreateAlertPolicy(context, request);
}

Status AlertPolicyServiceTracingStub::DeleteAlertPolicy(
    grpc::ClientContext& context,
    google::monitoring::v3::DeleteAlertPolicyRequest const& request) {
  return child_->DeleteAlertPolicy(context, request);
}

StatusOr<google::monitoring::v3::AlertPolicy>
AlertPolicyServiceTracingStub::UpdateAlertPolicy(
    grpc::ClientContext& context,
    google::monitoring::v3::UpdateAlertPolicyRequest const& request) {
  return child_->UpdateAlertPolicy(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
