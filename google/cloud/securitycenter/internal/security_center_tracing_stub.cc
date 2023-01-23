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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/internal/security_center_tracing_stub.h"

namespace google {
namespace cloud {
namespace securitycenter_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityCenterTracingStub::SecurityCenterTracingStub(
    std::shared_ptr<SecurityCenterStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterTracingStub::AsyncBulkMuteFindings(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  return child_->AsyncBulkMuteFindings(cq, std::move(context), request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingStub::CreateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  return child_->CreateSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::CreateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  return child_->CreateFinding(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingStub::CreateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  return child_->CreateMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingStub::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  return child_->CreateNotificationConfig(context, request);
}

Status SecurityCenterTracingStub::DeleteMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  return child_->DeleteMuteConfig(context, request);
}

Status SecurityCenterTracingStub::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  return child_->DeleteNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingStub::GetBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  return child_->GetBigQueryExport(context, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingStub::GetMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  return child_->GetMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingStub::GetNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  return child_->GetNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterTracingStub::GetOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  return child_->GetOrganizationSettings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingStub::GetSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  return child_->GetSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupAssetsResponse>
SecurityCenterTracingStub::GroupAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupAssetsRequest const& request) {
  return child_->GroupAssets(context, request);
}

StatusOr<google::cloud::securitycenter::v1::GroupFindingsResponse>
SecurityCenterTracingStub::GroupFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::GroupFindingsRequest const& request) {
  return child_->GroupFindings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListAssetsResponse>
SecurityCenterTracingStub::ListAssets(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListAssetsRequest const& request) {
  return child_->ListAssets(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListFindingsResponse>
SecurityCenterTracingStub::ListFindings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListFindingsRequest const& request) {
  return child_->ListFindings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListMuteConfigsResponse>
SecurityCenterTracingStub::ListMuteConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListMuteConfigsRequest const& request) {
  return child_->ListMuteConfigs(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListNotificationConfigsResponse>
SecurityCenterTracingStub::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest const&
        request) {
  return child_->ListNotificationConfigs(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListSourcesResponse>
SecurityCenterTracingStub::ListSources(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListSourcesRequest const& request) {
  return child_->ListSources(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterTracingStub::AsyncRunAssetDiscovery(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  return child_->AsyncRunAssetDiscovery(cq, std::move(context), request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::SetFindingState(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  return child_->SetFindingState(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::SetMute(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  return child_->SetMute(context, request);
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterTracingStub::UpdateExternalSystem(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  return child_->UpdateExternalSystem(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingStub::UpdateFinding(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  return child_->UpdateFinding(context, request);
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingStub::UpdateMuteConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  return child_->UpdateMuteConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingStub::UpdateNotificationConfig(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  return child_->UpdateNotificationConfig(context, request);
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterTracingStub::UpdateOrganizationSettings(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  return child_->UpdateOrganizationSettings(context, request);
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingStub::UpdateSource(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  return child_->UpdateSource(context, request);
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterTracingStub::UpdateSecurityMarks(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  return child_->UpdateSecurityMarks(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingStub::CreateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  return child_->CreateBigQueryExport(context, request);
}

Status SecurityCenterTracingStub::DeleteBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  return child_->DeleteBigQueryExport(context, request);
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingStub::UpdateBigQueryExport(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  return child_->UpdateBigQueryExport(context, request);
}

StatusOr<google::cloud::securitycenter::v1::ListBigQueryExportsResponse>
SecurityCenterTracingStub::ListBigQueryExports(
    grpc::ClientContext& context,
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest const&
        request) {
  return child_->ListBigQueryExports(context, request);
}

future<StatusOr<google::longrunning::Operation>>
SecurityCenterTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> SecurityCenterTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_internal
}  // namespace cloud
}  // namespace google
