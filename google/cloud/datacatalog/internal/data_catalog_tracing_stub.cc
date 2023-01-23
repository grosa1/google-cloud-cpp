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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#include "google/cloud/datacatalog/internal/data_catalog_tracing_stub.h"

namespace google {
namespace cloud {
namespace datacatalog_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataCatalogTracingStub::DataCatalogTracingStub(
    std::shared_ptr<DataCatalogStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::datacatalog::v1::SearchCatalogResponse>
DataCatalogTracingStub::SearchCatalog(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::SearchCatalogRequest const& request) {
  return child_->SearchCatalog(context, request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingStub::CreateEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request) {
  return child_->CreateEntryGroup(context, request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingStub::GetEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetEntryGroupRequest const& request) {
  return child_->GetEntryGroup(context, request);
}

StatusOr<google::cloud::datacatalog::v1::EntryGroup>
DataCatalogTracingStub::UpdateEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request) {
  return child_->UpdateEntryGroup(context, request);
}

Status DataCatalogTracingStub::DeleteEntryGroup(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request) {
  return child_->DeleteEntryGroup(context, request);
}

StatusOr<google::cloud::datacatalog::v1::ListEntryGroupsResponse>
DataCatalogTracingStub::ListEntryGroups(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListEntryGroupsRequest const& request) {
  return child_->ListEntryGroups(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::CreateEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateEntryRequest const& request) {
  return child_->CreateEntry(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::UpdateEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateEntryRequest const& request) {
  return child_->UpdateEntry(context, request);
}

Status DataCatalogTracingStub::DeleteEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteEntryRequest const& request) {
  return child_->DeleteEntry(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::GetEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetEntryRequest const& request) {
  return child_->GetEntry(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Entry>
DataCatalogTracingStub::LookupEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::LookupEntryRequest const& request) {
  return child_->LookupEntry(context, request);
}

StatusOr<google::cloud::datacatalog::v1::ListEntriesResponse>
DataCatalogTracingStub::ListEntries(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListEntriesRequest const& request) {
  return child_->ListEntries(context, request);
}

StatusOr<google::cloud::datacatalog::v1::EntryOverview>
DataCatalogTracingStub::ModifyEntryOverview(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const& request) {
  return child_->ModifyEntryOverview(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Contacts>
DataCatalogTracingStub::ModifyEntryContacts(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ModifyEntryContactsRequest const& request) {
  return child_->ModifyEntryContacts(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingStub::CreateTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request) {
  return child_->CreateTagTemplate(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingStub::GetTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::GetTagTemplateRequest const& request) {
  return child_->GetTagTemplate(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplate>
DataCatalogTracingStub::UpdateTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request) {
  return child_->UpdateTagTemplate(context, request);
}

Status DataCatalogTracingStub::DeleteTagTemplate(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request) {
  return child_->DeleteTagTemplate(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::CreateTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
        request) {
  return child_->CreateTagTemplateField(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::UpdateTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
        request) {
  return child_->UpdateTagTemplateField(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::RenameTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
        request) {
  return child_->RenameTagTemplateField(context, request);
}

StatusOr<google::cloud::datacatalog::v1::TagTemplateField>
DataCatalogTracingStub::RenameTagTemplateFieldEnumValue(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::
        RenameTagTemplateFieldEnumValueRequest const& request) {
  return child_->RenameTagTemplateFieldEnumValue(context, request);
}

Status DataCatalogTracingStub::DeleteTagTemplateField(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
        request) {
  return child_->DeleteTagTemplateField(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogTracingStub::CreateTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::CreateTagRequest const& request) {
  return child_->CreateTag(context, request);
}

StatusOr<google::cloud::datacatalog::v1::Tag> DataCatalogTracingStub::UpdateTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UpdateTagRequest const& request) {
  return child_->UpdateTag(context, request);
}

Status DataCatalogTracingStub::DeleteTag(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::DeleteTagRequest const& request) {
  return child_->DeleteTag(context, request);
}

StatusOr<google::cloud::datacatalog::v1::ListTagsResponse>
DataCatalogTracingStub::ListTags(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::ListTagsRequest const& request) {
  return child_->ListTags(context, request);
}

StatusOr<google::cloud::datacatalog::v1::StarEntryResponse>
DataCatalogTracingStub::StarEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::StarEntryRequest const& request) {
  return child_->StarEntry(context, request);
}

StatusOr<google::cloud::datacatalog::v1::UnstarEntryResponse>
DataCatalogTracingStub::UnstarEntry(
    grpc::ClientContext& context,
    google::cloud::datacatalog::v1::UnstarEntryRequest const& request) {
  return child_->UnstarEntry(context, request);
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> DataCatalogTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataCatalogTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return child_->TestIamPermissions(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_internal
}  // namespace cloud
}  // namespace google
