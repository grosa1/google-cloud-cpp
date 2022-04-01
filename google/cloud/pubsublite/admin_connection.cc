// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/admin_connection.h"
#include "google/cloud/pubsublite/admin_options.h"
#include "google/cloud/pubsublite/internal/admin_connection_impl.h"
#include "google/cloud/pubsublite/internal/admin_option_defaults.h"
#include "google/cloud/pubsublite/internal/admin_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AdminServiceConnection::~AdminServiceConnection() = default;

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceConnection::CreateTopic(
    google::cloud::pubsublite::v1::CreateTopicRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::pubsublite::v1::Topic> AdminServiceConnection::GetTopic(
    google::cloud::pubsublite::v1::GetTopicRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
AdminServiceConnection::GetTopicPartitions(
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::pubsublite::v1::Topic>
    AdminServiceConnection::ListTopics(
        google::cloud::pubsublite::v1::
            ListTopicsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::pubsublite::v1::Topic>>();
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceConnection::UpdateTopic(
    google::cloud::pubsublite::v1::UpdateTopicRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AdminServiceConnection::DeleteTopic(
    google::cloud::pubsublite::v1::DeleteTopicRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<std::string> AdminServiceConnection::ListTopicSubscriptions(
    google::cloud::pubsublite::v1::
        ListTopicSubscriptionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::string>>();
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceConnection::CreateSubscription(
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceConnection::GetSubscription(
    google::cloud::pubsublite::v1::GetSubscriptionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::pubsublite::v1::Subscription>
    AdminServiceConnection::ListSubscriptions(
        google::cloud::pubsublite::v1::
            ListSubscriptionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::pubsublite::v1::Subscription>>();
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceConnection::UpdateSubscription(
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AdminServiceConnection::DeleteSubscription(
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::pubsublite::v1::SeekSubscriptionResponse>>
AdminServiceConnection::SeekSubscription(
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::pubsublite::v1::SeekSubscriptionResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceConnection::CreateReservation(
    google::cloud::pubsublite::v1::CreateReservationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceConnection::GetReservation(
    google::cloud::pubsublite::v1::GetReservationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::pubsublite::v1::Reservation>
    AdminServiceConnection::ListReservations(
        google::cloud::pubsublite::v1::
            ListReservationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::pubsublite::v1::Reservation>>();
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceConnection::UpdateReservation(
    google::cloud::pubsublite::v1::UpdateReservationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status AdminServiceConnection::DeleteReservation(
    google::cloud::pubsublite::v1::DeleteReservationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<std::string> AdminServiceConnection::ListReservationTopics(
    google::cloud::pubsublite::v1::
        ListReservationTopicsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<std::string>>();
}

future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
AdminServiceConnection::AsyncGetTopicPartitions(
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<AdminServiceConnection> MakeAdminServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AdminServicePolicyOptionList>(options,
                                                               __func__);
  options = pubsublite_internal::AdminServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = pubsublite_internal::CreateDefaultAdminServiceStub(
      background->cq(), options);
  return std::make_shared<pubsublite_internal::AdminServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<pubsublite::AdminServiceConnection> MakeAdminServiceConnection(
    std::shared_ptr<AdminServiceStub> stub, Options options) {
  options = AdminServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  return std::make_shared<pubsublite_internal::AdminServiceConnectionImpl>(
      std::move(background), std::move(stub), std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
