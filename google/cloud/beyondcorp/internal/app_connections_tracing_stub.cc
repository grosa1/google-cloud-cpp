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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/internal/app_connections_tracing_stub.h"

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AppConnectionsServiceTracingStub::AppConnectionsServiceTracingStub(
    std::shared_ptr<AppConnectionsServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsResponse>
AppConnectionsServiceTracingStub::ListAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ListAppConnectionsRequest const& request) {
  return child_->ListAppConnections(context, request);
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceTracingStub::GetAppConnection(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  return child_->GetAppConnection(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncCreateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  return child_->AsyncCreateAppConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncUpdateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  return child_->AsyncUpdateAppConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncDeleteAppConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  return child_->AsyncDeleteAppConnection(cq, std::move(context), request);
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::
             ResolveAppConnectionsResponse>
AppConnectionsServiceTracingStub::ResolveAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ResolveAppConnectionsRequest const& request) {
  return child_->ResolveAppConnections(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AppConnectionsServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
