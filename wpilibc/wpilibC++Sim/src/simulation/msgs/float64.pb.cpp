// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgs/float64.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "simulation/msgs/float64.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* Float64_descriptor_ = nullptr;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Float64_reflection_ = nullptr;

}  // namespace


void protobuf_AssignDesc_msgs_2ffloat64_2eproto() {
  protobuf_AddDesc_msgs_2ffloat64_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msgs/float64.proto");
  GOOGLE_CHECK(file != nullptr);
  Float64_descriptor_ = file->message_type(0);
  static const int Float64_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Float64, data_),
  };
  Float64_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Float64_descriptor_,
      Float64::default_instance_,
      Float64_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Float64, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Float64, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Float64));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msgs_2ffloat64_2eproto);
}

void protobuf_RegisterTypes(const std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Float64_descriptor_, &Float64::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msgs_2ffloat64_2eproto() {
  delete Float64::default_instance_;
  delete Float64_reflection_;
}

void protobuf_AddDesc_msgs_2ffloat64_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022msgs/float64.proto\022\013gazebo.msgs\"\027\n\007Flo"
    "at64\022\014\n\004data\030\001 \002(\001B\013B\tGzFloat64", 71);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msgs/float64.proto", &protobuf_RegisterTypes);
  Float64::default_instance_ = new Float64();
  Float64::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msgs_2ffloat64_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msgs_2ffloat64_2eproto {
  StaticDescriptorInitializer_msgs_2ffloat64_2eproto() {
    protobuf_AddDesc_msgs_2ffloat64_2eproto();
  }
} static_descriptor_initializer_msgs_2ffloat64_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Float64::kDataFieldNumber;
#endif  // !_MSC_VER

Float64::Float64()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Float64::InitAsDefaultInstance() {
}

Float64::Float64(const Float64& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Float64::SharedCtor() {
  _cached_size_ = 0;
  data_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Float64::~Float64() {
  SharedDtor();
}

void Float64::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Float64::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Float64::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Float64_descriptor_;
}

const Float64& Float64::default_instance() {
  if (default_instance_ == nullptr) protobuf_AddDesc_msgs_2ffloat64_2eproto();
  return *default_instance_;
}

Float64* Float64::default_instance_ = nullptr;

Float64* Float64::New() const {
  return new Float64;
}

void Float64::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    data_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Float64::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &data_)));
          set_has_data();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Float64::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required double data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Float64::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required double data = 1;
  if (has_data()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Float64::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double data = 1;
    if (has_data()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Float64::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Float64* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Float64*>(
      &from);
  if (source == nullptr) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Float64::MergeFrom(const Float64& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      set_data(from.data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Float64::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Float64::CopyFrom(const Float64& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Float64::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Float64::Swap(Float64* other) {
  if (other != this) {
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Float64::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Float64_descriptor_;
  metadata.reflection = Float64_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

// @@protoc_insertion_point(global_scope)
