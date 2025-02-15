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
// source: google/cloud/deploy/v1/cloud_deploy.proto

#include "google/cloud/deploy/v1/cloud_deploy_connection.h"
#include "google/cloud/deploy/v1/cloud_deploy_options.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_connection_impl.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_option_defaults.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_stub_factory.h"
#include "google/cloud/deploy/v1/internal/cloud_deploy_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace deploy_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudDeployConnection::~CloudDeployConnection() = default;

StreamRange<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployConnection::ListDeliveryPipelines(
    google::cloud::deploy::v1::
        ListDeliveryPipelinesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::deploy::v1::DeliveryPipeline>>();
}

StatusOr<google::cloud::deploy::v1::DeliveryPipeline>
CloudDeployConnection::GetDeliveryPipeline(
    google::cloud::deploy::v1::GetDeliveryPipelineRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployConnection::CreateDeliveryPipeline(
    google::cloud::deploy::v1::CreateDeliveryPipelineRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>
CloudDeployConnection::UpdateDeliveryPipeline(
    google::cloud::deploy::v1::UpdateDeliveryPipelineRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::DeliveryPipeline>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployConnection::DeleteDeliveryPipeline(
    google::cloud::deploy::v1::DeleteDeliveryPipelineRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::deploy::v1::Target>
CloudDeployConnection::ListTargets(
    google::cloud::deploy::v1::
        ListTargetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::deploy::v1::Target>>();
}

StatusOr<google::cloud::deploy::v1::Target> CloudDeployConnection::GetTarget(
    google::cloud::deploy::v1::GetTargetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployConnection::CreateTarget(
    google::cloud::deploy::v1::CreateTargetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::Target>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::deploy::v1::Target>>
CloudDeployConnection::UpdateTarget(
    google::cloud::deploy::v1::UpdateTargetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::Target>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::deploy::v1::OperationMetadata>>
CloudDeployConnection::DeleteTarget(
    google::cloud::deploy::v1::DeleteTargetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::deploy::v1::Release>
CloudDeployConnection::ListReleases(
    google::cloud::deploy::v1::
        ListReleasesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::deploy::v1::Release>>();
}

StatusOr<google::cloud::deploy::v1::Release> CloudDeployConnection::GetRelease(
    google::cloud::deploy::v1::GetReleaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::deploy::v1::Release>>
CloudDeployConnection::CreateRelease(
    google::cloud::deploy::v1::CreateReleaseRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::Release>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::deploy::v1::AbandonReleaseResponse>
CloudDeployConnection::AbandonRelease(
    google::cloud::deploy::v1::AbandonReleaseRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::deploy::v1::ApproveRolloutResponse>
CloudDeployConnection::ApproveRollout(
    google::cloud::deploy::v1::ApproveRolloutRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::deploy::v1::AdvanceRolloutResponse>
CloudDeployConnection::AdvanceRollout(
    google::cloud::deploy::v1::AdvanceRolloutRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::deploy::v1::CancelRolloutResponse>
CloudDeployConnection::CancelRollout(
    google::cloud::deploy::v1::CancelRolloutRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::deploy::v1::Rollout>
CloudDeployConnection::ListRollouts(
    google::cloud::deploy::v1::
        ListRolloutsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::deploy::v1::Rollout>>();
}

StatusOr<google::cloud::deploy::v1::Rollout> CloudDeployConnection::GetRollout(
    google::cloud::deploy::v1::GetRolloutRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::deploy::v1::Rollout>>
CloudDeployConnection::CreateRollout(
    google::cloud::deploy::v1::CreateRolloutRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::deploy::v1::Rollout>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::deploy::v1::IgnoreJobResponse>
CloudDeployConnection::IgnoreJob(
    google::cloud::deploy::v1::IgnoreJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::deploy::v1::RetryJobResponse>
CloudDeployConnection::RetryJob(
    google::cloud::deploy::v1::RetryJobRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::deploy::v1::JobRun>
CloudDeployConnection::ListJobRuns(
    google::cloud::deploy::v1::
        ListJobRunsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::deploy::v1::JobRun>>();
}

StatusOr<google::cloud::deploy::v1::JobRun> CloudDeployConnection::GetJobRun(
    google::cloud::deploy::v1::GetJobRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::deploy::v1::TerminateJobRunResponse>
CloudDeployConnection::TerminateJobRun(
    google::cloud::deploy::v1::TerminateJobRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::deploy::v1::Config> CloudDeployConnection::GetConfig(
    google::cloud::deploy::v1::GetConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<CloudDeployConnection> MakeCloudDeployConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 CloudDeployPolicyOptionList>(options,
                                                              __func__);
  options = deploy_v1_internal::CloudDeployDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = deploy_v1_internal::CreateDefaultCloudDeployStub(background->cq(),
                                                               options);
  return deploy_v1_internal::MakeCloudDeployTracingConnection(
      std::make_shared<deploy_v1_internal::CloudDeployConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace deploy_v1
}  // namespace cloud
}  // namespace google
