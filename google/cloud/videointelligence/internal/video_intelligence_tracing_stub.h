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
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_INTERNAL_VIDEO_INTELLIGENCE_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_INTERNAL_VIDEO_INTELLIGENCE_TRACING_STUB_H

#include "google/cloud/videointelligence/internal/video_intelligence_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace videointelligence_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VideoIntelligenceServiceTracingStub
    : public VideoIntelligenceServiceStub {
 public:
  ~VideoIntelligenceServiceTracingStub() override = default;

  explicit VideoIntelligenceServiceTracingStub(
      std::shared_ptr<VideoIntelligenceServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncAnnotateVideo(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::videointelligence::v1::AnnotateVideoRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<VideoIntelligenceServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_INTERNAL_VIDEO_INTELLIGENCE_TRACING_STUB_H
