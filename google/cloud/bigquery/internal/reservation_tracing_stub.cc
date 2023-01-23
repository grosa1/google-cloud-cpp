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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/internal/reservation_tracing_stub.h"

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ReservationServiceTracingStub::ReservationServiceTracingStub(
    std::shared_ptr<ReservationServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingStub::CreateReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&
        request) {
  return child_->CreateReservation(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::ListReservationsResponse>
ReservationServiceTracingStub::ListReservations(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::ListReservationsRequest const&
        request) {
  return child_->ListReservations(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingStub::GetReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&
        request) {
  return child_->GetReservation(context, request);
}

Status ReservationServiceTracingStub::DeleteReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&
        request) {
  return child_->DeleteReservation(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Reservation>
ReservationServiceTracingStub::UpdateReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&
        request) {
  return child_->UpdateReservation(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::CreateCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const& request) {
  return child_->CreateCapacityCommitment(context, request);
}

StatusOr<
    google::cloud::bigquery::reservation::v1::ListCapacityCommitmentsResponse>
ReservationServiceTracingStub::ListCapacityCommitments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        ListCapacityCommitmentsRequest const& request) {
  return child_->ListCapacityCommitments(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::GetCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const& request) {
  return child_->GetCapacityCommitment(context, request);
}

Status ReservationServiceTracingStub::DeleteCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const& request) {
  return child_->DeleteCapacityCommitment(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::UpdateCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const& request) {
  return child_->UpdateCapacityCommitment(context, request);
}

StatusOr<
    google::cloud::bigquery::reservation::v1::SplitCapacityCommitmentResponse>
ReservationServiceTracingStub::SplitCapacityCommitment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const& request) {
  return child_->SplitCapacityCommitment(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::CapacityCommitment>
ReservationServiceTracingStub::MergeCapacityCommitments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const& request) {
  return child_->MergeCapacityCommitments(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingStub::CreateAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&
        request) {
  return child_->CreateAssignment(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::ListAssignmentsResponse>
ReservationServiceTracingStub::ListAssignments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::ListAssignmentsRequest const&
        request) {
  return child_->ListAssignments(context, request);
}

Status ReservationServiceTracingStub::DeleteAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&
        request) {
  return child_->DeleteAssignment(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAssignmentsResponse>
ReservationServiceTracingStub::SearchAssignments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::SearchAssignmentsRequest const&
        request) {
  return child_->SearchAssignments(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::SearchAllAssignmentsResponse>
ReservationServiceTracingStub::SearchAllAssignments(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::SearchAllAssignmentsRequest const&
        request) {
  return child_->SearchAllAssignments(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingStub::MoveAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&
        request) {
  return child_->MoveAssignment(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::Assignment>
ReservationServiceTracingStub::UpdateAssignment(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&
        request) {
  return child_->UpdateAssignment(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceTracingStub::GetBiReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&
        request) {
  return child_->GetBiReservation(context, request);
}

StatusOr<google::cloud::bigquery::reservation::v1::BiReservation>
ReservationServiceTracingStub::UpdateBiReservation(
    grpc::ClientContext& context,
    google::cloud::bigquery::reservation::v1::UpdateBiReservationRequest const&
        request) {
  return child_->UpdateBiReservation(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
