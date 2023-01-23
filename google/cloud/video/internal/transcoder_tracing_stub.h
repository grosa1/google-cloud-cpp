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
// source: google/cloud/video/transcoder/v1/services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_TRANSCODER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_TRANSCODER_TRACING_STUB_H

#include "google/cloud/video/internal/transcoder_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranscoderServiceTracingStub : public TranscoderServiceStub {
 public:
  ~TranscoderServiceTracingStub() override = default;

  explicit TranscoderServiceTracingStub(
      std::shared_ptr<TranscoderServiceStub> child);

  StatusOr<google::cloud::video::transcoder::v1::Job> CreateJob(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::CreateJobRequest const& request)
      override;

  StatusOr<google::cloud::video::transcoder::v1::ListJobsResponse> ListJobs(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::ListJobsRequest const& request)
      override;

  StatusOr<google::cloud::video::transcoder::v1::Job> GetJob(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::GetJobRequest const& request)
      override;

  Status DeleteJob(grpc::ClientContext& context,
                   google::cloud::video::transcoder::v1::DeleteJobRequest const&
                       request) override;

  StatusOr<google::cloud::video::transcoder::v1::JobTemplate> CreateJobTemplate(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::CreateJobTemplateRequest const&
          request) override;

  StatusOr<google::cloud::video::transcoder::v1::ListJobTemplatesResponse>
  ListJobTemplates(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::ListJobTemplatesRequest const&
          request) override;

  StatusOr<google::cloud::video::transcoder::v1::JobTemplate> GetJobTemplate(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::GetJobTemplateRequest const&
          request) override;

  Status DeleteJobTemplate(
      grpc::ClientContext& context,
      google::cloud::video::transcoder::v1::DeleteJobTemplateRequest const&
          request) override;

 private:
  std::shared_ptr<TranscoderServiceStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEO_INTERNAL_TRANSCODER_TRACING_STUB_H
