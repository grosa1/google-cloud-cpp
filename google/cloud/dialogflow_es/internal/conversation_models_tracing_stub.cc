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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#include "google/cloud/dialogflow_es/internal/conversation_models_tracing_stub.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationModelsTracingStub::ConversationModelsTracingStub(
    std::shared_ptr<ConversationModelsStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncCreateConversationModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::CreateConversationModelRequest const&
        request) {
  return child_->AsyncCreateConversationModel(cq, std::move(context), request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationModel>
ConversationModelsTracingStub::GetConversationModel(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationModelRequest const& request) {
  return child_->GetConversationModel(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationModelsResponse>
ConversationModelsTracingStub::ListConversationModels(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationModelsRequest const&
        request) {
  return child_->ListConversationModels(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncDeleteConversationModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
        request) {
  return child_->AsyncDeleteConversationModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncDeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::DeployConversationModelRequest const&
        request) {
  return child_->AsyncDeployConversationModel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncUndeployConversationModel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
        request) {
  return child_->AsyncUndeployConversationModel(cq, std::move(context),
                                                request);
}

StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>
ConversationModelsTracingStub::GetConversationModelEvaluation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationModelEvaluationRequest const&
        request) {
  return child_->GetConversationModelEvaluation(context, request);
}

StatusOr<
    google::cloud::dialogflow::v2::ListConversationModelEvaluationsResponse>
ConversationModelsTracingStub::ListConversationModelEvaluations(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::
        ListConversationModelEvaluationsRequest const& request) {
  return child_->ListConversationModelEvaluations(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncCreateConversationModelEvaluation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::
        CreateConversationModelEvaluationRequest const& request) {
  return child_->AsyncCreateConversationModelEvaluation(cq, std::move(context),
                                                        request);
}

future<StatusOr<google::longrunning::Operation>>
ConversationModelsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ConversationModelsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
