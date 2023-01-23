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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/internal/storage_transfer_tracing_stub.h"

namespace google {
namespace cloud {
namespace storagetransfer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageTransferServiceTracingStub::StorageTransferServiceTracingStub(
    std::shared_ptr<StorageTransferServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::storagetransfer::v1::GoogleServiceAccount>
StorageTransferServiceTracingStub::GetGoogleServiceAccount(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetGoogleServiceAccountRequest const&
        request) {
  return child_->GetGoogleServiceAccount(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingStub::CreateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateTransferJobRequest const& request) {
  return child_->CreateTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingStub::UpdateTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateTransferJobRequest const& request) {
  return child_->UpdateTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::TransferJob>
StorageTransferServiceTracingStub::GetTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetTransferJobRequest const& request) {
  return child_->GetTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::ListTransferJobsResponse>
StorageTransferServiceTracingStub::ListTransferJobs(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListTransferJobsRequest const& request) {
  return child_->ListTransferJobs(context, request);
}

Status StorageTransferServiceTracingStub::PauseTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::PauseTransferOperationRequest const& request) {
  return child_->PauseTransferOperation(context, request);
}

Status StorageTransferServiceTracingStub::ResumeTransferOperation(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ResumeTransferOperationRequest const&
        request) {
  return child_->ResumeTransferOperation(context, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceTracingStub::AsyncRunTransferJob(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::storagetransfer::v1::RunTransferJobRequest const& request) {
  return child_->AsyncRunTransferJob(cq, std::move(context), request);
}

Status StorageTransferServiceTracingStub::DeleteTransferJob(
    grpc::ClientContext& context,
    google::storagetransfer::v1::DeleteTransferJobRequest const& request) {
  return child_->DeleteTransferJob(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingStub::CreateAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::CreateAgentPoolRequest const& request) {
  return child_->CreateAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingStub::UpdateAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::UpdateAgentPoolRequest const& request) {
  return child_->UpdateAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::AgentPool>
StorageTransferServiceTracingStub::GetAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::GetAgentPoolRequest const& request) {
  return child_->GetAgentPool(context, request);
}

StatusOr<google::storagetransfer::v1::ListAgentPoolsResponse>
StorageTransferServiceTracingStub::ListAgentPools(
    grpc::ClientContext& context,
    google::storagetransfer::v1::ListAgentPoolsRequest const& request) {
  return child_->ListAgentPools(context, request);
}

Status StorageTransferServiceTracingStub::DeleteAgentPool(
    grpc::ClientContext& context,
    google::storagetransfer::v1::DeleteAgentPoolRequest const& request) {
  return child_->DeleteAgentPool(context, request);
}

future<StatusOr<google::longrunning::Operation>>
StorageTransferServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> StorageTransferServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer_internal
}  // namespace cloud
}  // namespace google
