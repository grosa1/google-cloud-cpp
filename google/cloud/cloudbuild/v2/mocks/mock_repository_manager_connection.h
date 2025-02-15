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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_MOCKS_MOCK_REPOSITORY_MANAGER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_MOCKS_MOCK_REPOSITORY_MANAGER_CONNECTION_H

#include "google/cloud/cloudbuild/v2/repository_manager_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace cloudbuild_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RepositoryManagerConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RepositoryManagerClient`. To do so,
 * construct an object of type `RepositoryManagerClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockRepositoryManagerConnection
    : public cloudbuild_v2::RepositoryManagerConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(future<StatusOr<google::devtools::cloudbuild::v2::Connection>>,
              CreateConnection,
              (google::devtools::cloudbuild::v2::CreateConnectionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v2::Connection>, GetConnection,
      (google::devtools::cloudbuild::v2::GetConnectionRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::devtools::cloudbuild::v2::Connection>,
      ListConnections,
      (google::devtools::cloudbuild::v2::ListConnectionsRequest request),
      (override));

  MOCK_METHOD(future<StatusOr<google::devtools::cloudbuild::v2::Connection>>,
              UpdateConnection,
              (google::devtools::cloudbuild::v2::UpdateConnectionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>,
      DeleteConnection,
      (google::devtools::cloudbuild::v2::DeleteConnectionRequest const&
           request),
      (override));

  MOCK_METHOD(future<StatusOr<google::devtools::cloudbuild::v2::Repository>>,
              CreateRepository,
              (google::devtools::cloudbuild::v2::CreateRepositoryRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<
          google::devtools::cloudbuild::v2::BatchCreateRepositoriesResponse>>,
      BatchCreateRepositories,
      (google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v2::Repository>, GetRepository,
      (google::devtools::cloudbuild::v2::GetRepositoryRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::devtools::cloudbuild::v2::Repository>,
      ListRepositories,
      (google::devtools::cloudbuild::v2::ListRepositoriesRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::devtools::cloudbuild::v2::OperationMetadata>>,
      DeleteRepository,
      (google::devtools::cloudbuild::v2::DeleteRepositoryRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>,
      FetchReadWriteToken,
      (google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>,
      FetchReadToken,
      (google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request),
      (override));

  MOCK_METHOD(
      StreamRange<google::devtools::cloudbuild::v2::Repository>,
      FetchLinkableRepositories,
      (google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_V2_MOCKS_MOCK_REPOSITORY_MANAGER_CONNECTION_H
