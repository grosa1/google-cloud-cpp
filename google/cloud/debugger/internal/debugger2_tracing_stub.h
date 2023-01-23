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
// source: google/devtools/clouddebugger/v2/debugger.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_DEBUGGER2_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_DEBUGGER2_TRACING_STUB_H

#include "google/cloud/debugger/internal/debugger2_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class Debugger2TracingStub : public Debugger2Stub {
 public:
  ~Debugger2TracingStub() override = default;

  explicit Debugger2TracingStub(std::shared_ptr<Debugger2Stub> child);

  StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
  SetBreakpoint(grpc::ClientContext& context,
                google::devtools::clouddebugger::v2::SetBreakpointRequest const&
                    request) override;

  StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
  GetBreakpoint(grpc::ClientContext& context,
                google::devtools::clouddebugger::v2::GetBreakpointRequest const&
                    request) override;

  Status DeleteBreakpoint(
      grpc::ClientContext& context,
      google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
  ListBreakpoints(
      grpc::ClientContext& context,
      google::devtools::clouddebugger::v2::ListBreakpointsRequest const&
          request) override;

  StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
  ListDebuggees(grpc::ClientContext& context,
                google::devtools::clouddebugger::v2::ListDebuggeesRequest const&
                    request) override;

 private:
  std::shared_ptr<Debugger2Stub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_INTERNAL_DEBUGGER2_TRACING_STUB_H
