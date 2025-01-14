// Copyright 2023 Google LLC
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
// source: google/devtools/cloudbuild/v2/repositories.proto

#include "google/cloud/cloudbuild/v2/repository_manager_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RepositoryManagerConnectionIdempotencyPolicy::
    ~RepositoryManagerConnectionIdempotencyPolicy() = default;

std::unique_ptr<RepositoryManagerConnectionIdempotencyPolicy>
RepositoryManagerConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RepositoryManagerConnectionIdempotencyPolicy>(*this);
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::CreateConnection(
    google::devtools::cloudbuild::v2::CreateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::GetConnection(
    google::devtools::cloudbuild::v2::GetConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::ListConnections(
    google::devtools::cloudbuild::v2::ListConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::UpdateConnection(
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::DeleteConnection(
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::CreateRepository(
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RepositoryManagerConnectionIdempotencyPolicy::BatchCreateRepositories(
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::GetRepository(
    google::devtools::cloudbuild::v2::GetRepositoryRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::ListRepositories(
    google::devtools::cloudbuild::v2::ListRepositoriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::DeleteRepository(
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::FetchReadWriteToken(
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RepositoryManagerConnectionIdempotencyPolicy::FetchReadToken(
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
RepositoryManagerConnectionIdempotencyPolicy::FetchLinkableRepositories(
    google::devtools::cloudbuild::v2::
        FetchLinkableRepositoriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<RepositoryManagerConnectionIdempotencyPolicy>
MakeDefaultRepositoryManagerConnectionIdempotencyPolicy() {
  return std::make_unique<RepositoryManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2
}  // namespace cloud
}  // namespace google
