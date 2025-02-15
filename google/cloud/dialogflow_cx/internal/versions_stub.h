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
// source: google/cloud/dialogflow/cx/v3/version.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_VERSIONS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_VERSIONS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/version.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <google/protobuf/struct.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VersionsStub {
 public:
  virtual ~VersionsStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::ListVersionsResponse>
  ListVersions(grpc::ClientContext& context,
               google::cloud::dialogflow::cx::v3::ListVersionsRequest const&
                   request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetVersionRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::CreateVersionRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateVersionRequest const&
          request) = 0;

  virtual Status DeleteVersion(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteVersionRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncLoadVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CompareVersionsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultVersionsStub : public VersionsStub {
 public:
  DefaultVersionsStub(
      std::unique_ptr<
          google::cloud::dialogflow::cx::v3::Versions::StubInterface>
          grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::dialogflow::cx::v3::ListVersionsResponse>
  ListVersions(grpc::ClientContext& client_context,
               google::cloud::dialogflow::cx::v3::ListVersionsRequest const&
                   request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::Version> GetVersion(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::GetVersionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::CreateVersionRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Version> UpdateVersion(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::UpdateVersionRequest const& request)
      override;

  Status DeleteVersion(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::DeleteVersionRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncLoadVersion(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dialogflow::cx::v3::LoadVersionRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::CompareVersionsResponse>
  CompareVersions(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::CompareVersionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::dialogflow::cx::v3::Versions::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_VERSIONS_STUB_H
