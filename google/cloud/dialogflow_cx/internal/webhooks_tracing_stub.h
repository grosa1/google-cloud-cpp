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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_WEBHOOKS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_WEBHOOKS_TRACING_STUB_H

#include "google/cloud/dialogflow_cx/internal/webhooks_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WebhooksTracingStub : public WebhooksStub {
 public:
  ~WebhooksTracingStub() override = default;

  explicit WebhooksTracingStub(std::shared_ptr<WebhooksStub> child);

  StatusOr<google::cloud::dialogflow::cx::v3::ListWebhooksResponse>
  ListWebhooks(grpc::ClientContext& context,
               google::cloud::dialogflow::cx::v3::ListWebhooksRequest const&
                   request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> GetWebhook(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> CreateWebhook(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Webhook> UpdateWebhook(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request)
      override;

  Status DeleteWebhook(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request)
      override;

 private:
  std::shared_ptr<WebhooksStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_WEBHOOKS_TRACING_STUB_H
