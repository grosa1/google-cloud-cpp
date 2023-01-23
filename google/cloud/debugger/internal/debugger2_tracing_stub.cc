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

#include "google/cloud/debugger/internal/debugger2_tracing_stub.h"

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

Debugger2TracingStub::Debugger2TracingStub(std::shared_ptr<Debugger2Stub> child)
    : child_(std::move(child)) {}

StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
Debugger2TracingStub::SetBreakpoint(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::SetBreakpointRequest const& request) {
  return child_->SetBreakpoint(context, request);
}

StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
Debugger2TracingStub::GetBreakpoint(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::GetBreakpointRequest const& request) {
  return child_->GetBreakpoint(context, request);
}

Status Debugger2TracingStub::DeleteBreakpoint(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&
        request) {
  return child_->DeleteBreakpoint(context, request);
}

StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
Debugger2TracingStub::ListBreakpoints(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::ListBreakpointsRequest const&
        request) {
  return child_->ListBreakpoints(context, request);
}

StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
Debugger2TracingStub::ListDebuggees(
    grpc::ClientContext& context,
    google::devtools::clouddebugger::v2::ListDebuggeesRequest const& request) {
  return child_->ListDebuggees(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google
