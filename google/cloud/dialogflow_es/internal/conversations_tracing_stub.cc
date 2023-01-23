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
// source: google/cloud/dialogflow/v2/conversation.proto

#include "google/cloud/dialogflow_es/internal/conversations_tracing_stub.h"

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConversationsTracingStub::ConversationsTracingStub(
    std::shared_ptr<ConversationsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingStub::CreateConversation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateConversationRequest const& request) {
  return child_->CreateConversation(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListConversationsResponse>
ConversationsTracingStub::ListConversations(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListConversationsRequest const& request) {
  return child_->ListConversations(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingStub::GetConversation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetConversationRequest const& request) {
  return child_->GetConversation(context, request);
}

StatusOr<google::cloud::dialogflow::v2::Conversation>
ConversationsTracingStub::CompleteConversation(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CompleteConversationRequest const& request) {
  return child_->CompleteConversation(context, request);
}

StatusOr<google::cloud::dialogflow::v2::ListMessagesResponse>
ConversationsTracingStub::ListMessages(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListMessagesRequest const& request) {
  return child_->ListMessages(context, request);
}

StatusOr<google::cloud::dialogflow::v2::SuggestConversationSummaryResponse>
ConversationsTracingStub::SuggestConversationSummary(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::SuggestConversationSummaryRequest const&
        request) {
  return child_->SuggestConversationSummary(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
