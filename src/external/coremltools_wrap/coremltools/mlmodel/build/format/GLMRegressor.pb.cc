// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GLMRegressor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GLMRegressor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {
class GLMRegressor_DoubleArrayDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GLMRegressor_DoubleArray> {
} _GLMRegressor_DoubleArray_default_instance_;
class GLMRegressorDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GLMRegressor> {
} _GLMRegressor_default_instance_;

namespace protobuf_GLMRegressor_2eproto {

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};


void TableStruct::Shutdown() {
  _GLMRegressor_DoubleArray_default_instance_.Shutdown();
  _GLMRegressor_default_instance_.Shutdown();
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _GLMRegressor_DoubleArray_default_instance_.DefaultConstruct();
  _GLMRegressor_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

}  // namespace protobuf_GLMRegressor_2eproto

bool GLMRegressor_PostEvaluationTransform_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GLMRegressor_PostEvaluationTransform GLMRegressor::NoTransform;
const GLMRegressor_PostEvaluationTransform GLMRegressor::Logit;
const GLMRegressor_PostEvaluationTransform GLMRegressor::Probit;
const GLMRegressor_PostEvaluationTransform GLMRegressor::PostEvaluationTransform_MIN;
const GLMRegressor_PostEvaluationTransform GLMRegressor::PostEvaluationTransform_MAX;
const int GLMRegressor::PostEvaluationTransform_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GLMRegressor_DoubleArray::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GLMRegressor_DoubleArray::GLMRegressor_DoubleArray()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GLMRegressor_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.GLMRegressor.DoubleArray)
}
GLMRegressor_DoubleArray::GLMRegressor_DoubleArray(const GLMRegressor_DoubleArray& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      value_(from.value_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.GLMRegressor.DoubleArray)
}

void GLMRegressor_DoubleArray::SharedCtor() {
  _cached_size_ = 0;
}

GLMRegressor_DoubleArray::~GLMRegressor_DoubleArray() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.GLMRegressor.DoubleArray)
  SharedDtor();
}

void GLMRegressor_DoubleArray::SharedDtor() {
}

void GLMRegressor_DoubleArray::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GLMRegressor_DoubleArray& GLMRegressor_DoubleArray::default_instance() {
  protobuf_GLMRegressor_2eproto::InitDefaults();
  return *internal_default_instance();
}

GLMRegressor_DoubleArray* GLMRegressor_DoubleArray::New(::google::protobuf::Arena* arena) const {
  GLMRegressor_DoubleArray* n = new GLMRegressor_DoubleArray;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GLMRegressor_DoubleArray::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.GLMRegressor.DoubleArray)
  value_.Clear();
}

bool GLMRegressor_DoubleArray::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.GLMRegressor.DoubleArray)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated double value = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_value())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(9u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 10u, input, this->mutable_value())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CoreML.Specification.GLMRegressor.DoubleArray)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.GLMRegressor.DoubleArray)
  return false;
#undef DO_
}

void GLMRegressor_DoubleArray::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.GLMRegressor.DoubleArray)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated double value = 1;
  if (this->value_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_value_cached_byte_size_);
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->value().data(), this->value_size(), output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.GLMRegressor.DoubleArray)
}

size_t GLMRegressor_DoubleArray::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.GLMRegressor.DoubleArray)
  size_t total_size = 0;

  // repeated double value = 1;
  {
    unsigned int count = this->value_size();
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GLMRegressor_DoubleArray::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GLMRegressor_DoubleArray*>(&from));
}

void GLMRegressor_DoubleArray::MergeFrom(const GLMRegressor_DoubleArray& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.GLMRegressor.DoubleArray)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  value_.MergeFrom(from.value_);
}

void GLMRegressor_DoubleArray::CopyFrom(const GLMRegressor_DoubleArray& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.GLMRegressor.DoubleArray)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GLMRegressor_DoubleArray::IsInitialized() const {
  return true;
}

void GLMRegressor_DoubleArray::Swap(GLMRegressor_DoubleArray* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GLMRegressor_DoubleArray::InternalSwap(GLMRegressor_DoubleArray* other) {
  value_.InternalSwap(&other->value_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GLMRegressor_DoubleArray::GetTypeName() const {
  return "CoreML.Specification.GLMRegressor.DoubleArray";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GLMRegressor_DoubleArray

// repeated double value = 1;
int GLMRegressor_DoubleArray::value_size() const {
  return value_.size();
}
void GLMRegressor_DoubleArray::clear_value() {
  value_.Clear();
}
double GLMRegressor_DoubleArray::value(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMRegressor.DoubleArray.value)
  return value_.Get(index);
}
void GLMRegressor_DoubleArray::set_value(int index, double value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMRegressor.DoubleArray.value)
}
void GLMRegressor_DoubleArray::add_value(double value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMRegressor.DoubleArray.value)
}
const ::google::protobuf::RepeatedField< double >&
GLMRegressor_DoubleArray::value() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMRegressor.DoubleArray.value)
  return value_;
}
::google::protobuf::RepeatedField< double >*
GLMRegressor_DoubleArray::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMRegressor.DoubleArray.value)
  return &value_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GLMRegressor::kWeightsFieldNumber;
const int GLMRegressor::kOffsetFieldNumber;
const int GLMRegressor::kPostEvaluationTransformFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GLMRegressor::GLMRegressor()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GLMRegressor_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.GLMRegressor)
}
GLMRegressor::GLMRegressor(const GLMRegressor& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      weights_(from.weights_),
      offset_(from.offset_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  postevaluationtransform_ = from.postevaluationtransform_;
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.GLMRegressor)
}

void GLMRegressor::SharedCtor() {
  postevaluationtransform_ = 0;
  _cached_size_ = 0;
}

GLMRegressor::~GLMRegressor() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.GLMRegressor)
  SharedDtor();
}

void GLMRegressor::SharedDtor() {
}

void GLMRegressor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GLMRegressor& GLMRegressor::default_instance() {
  protobuf_GLMRegressor_2eproto::InitDefaults();
  return *internal_default_instance();
}

GLMRegressor* GLMRegressor::New(::google::protobuf::Arena* arena) const {
  GLMRegressor* n = new GLMRegressor;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GLMRegressor::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.GLMRegressor)
  weights_.Clear();
  offset_.Clear();
  postevaluationtransform_ = 0;
}

bool GLMRegressor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.GLMRegressor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .CoreML.Specification.GLMRegressor.DoubleArray weights = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_weights()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated double offset = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_offset())));
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(17u)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 18u, input, this->mutable_offset())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .CoreML.Specification.GLMRegressor.PostEvaluationTransform postEvaluationTransform = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_postevaluationtransform(static_cast< ::CoreML::Specification::GLMRegressor_PostEvaluationTransform >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CoreML.Specification.GLMRegressor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.GLMRegressor)
  return false;
#undef DO_
}

void GLMRegressor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.GLMRegressor)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .CoreML.Specification.GLMRegressor.DoubleArray weights = 1;
  for (unsigned int i = 0, n = this->weights_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->weights(i), output);
  }

  // repeated double offset = 2;
  if (this->offset_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_offset_cached_byte_size_);
    ::google::protobuf::internal::WireFormatLite::WriteDoubleArray(
      this->offset().data(), this->offset_size(), output);
  }

  // .CoreML.Specification.GLMRegressor.PostEvaluationTransform postEvaluationTransform = 3;
  if (this->postevaluationtransform() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->postevaluationtransform(), output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.GLMRegressor)
}

size_t GLMRegressor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.GLMRegressor)
  size_t total_size = 0;

  // repeated .CoreML.Specification.GLMRegressor.DoubleArray weights = 1;
  {
    unsigned int count = this->weights_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->weights(i));
    }
  }

  // repeated double offset = 2;
  {
    unsigned int count = this->offset_size();
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _offset_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // .CoreML.Specification.GLMRegressor.PostEvaluationTransform postEvaluationTransform = 3;
  if (this->postevaluationtransform() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->postevaluationtransform());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GLMRegressor::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GLMRegressor*>(&from));
}

void GLMRegressor::MergeFrom(const GLMRegressor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.GLMRegressor)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  weights_.MergeFrom(from.weights_);
  offset_.MergeFrom(from.offset_);
  if (from.postevaluationtransform() != 0) {
    set_postevaluationtransform(from.postevaluationtransform());
  }
}

void GLMRegressor::CopyFrom(const GLMRegressor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.GLMRegressor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GLMRegressor::IsInitialized() const {
  return true;
}

void GLMRegressor::Swap(GLMRegressor* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GLMRegressor::InternalSwap(GLMRegressor* other) {
  weights_.InternalSwap(&other->weights_);
  offset_.InternalSwap(&other->offset_);
  std::swap(postevaluationtransform_, other->postevaluationtransform_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GLMRegressor::GetTypeName() const {
  return "CoreML.Specification.GLMRegressor";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GLMRegressor

// repeated .CoreML.Specification.GLMRegressor.DoubleArray weights = 1;
int GLMRegressor::weights_size() const {
  return weights_.size();
}
void GLMRegressor::clear_weights() {
  weights_.Clear();
}
const ::CoreML::Specification::GLMRegressor_DoubleArray& GLMRegressor::weights(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMRegressor.weights)
  return weights_.Get(index);
}
::CoreML::Specification::GLMRegressor_DoubleArray* GLMRegressor::mutable_weights(int index) {
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMRegressor.weights)
  return weights_.Mutable(index);
}
::CoreML::Specification::GLMRegressor_DoubleArray* GLMRegressor::add_weights() {
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMRegressor.weights)
  return weights_.Add();
}
::google::protobuf::RepeatedPtrField< ::CoreML::Specification::GLMRegressor_DoubleArray >*
GLMRegressor::mutable_weights() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMRegressor.weights)
  return &weights_;
}
const ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::GLMRegressor_DoubleArray >&
GLMRegressor::weights() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMRegressor.weights)
  return weights_;
}

// repeated double offset = 2;
int GLMRegressor::offset_size() const {
  return offset_.size();
}
void GLMRegressor::clear_offset() {
  offset_.Clear();
}
double GLMRegressor::offset(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMRegressor.offset)
  return offset_.Get(index);
}
void GLMRegressor::set_offset(int index, double value) {
  offset_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMRegressor.offset)
}
void GLMRegressor::add_offset(double value) {
  offset_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMRegressor.offset)
}
const ::google::protobuf::RepeatedField< double >&
GLMRegressor::offset() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMRegressor.offset)
  return offset_;
}
::google::protobuf::RepeatedField< double >*
GLMRegressor::mutable_offset() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMRegressor.offset)
  return &offset_;
}

// .CoreML.Specification.GLMRegressor.PostEvaluationTransform postEvaluationTransform = 3;
void GLMRegressor::clear_postevaluationtransform() {
  postevaluationtransform_ = 0;
}
::CoreML::Specification::GLMRegressor_PostEvaluationTransform GLMRegressor::postevaluationtransform() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMRegressor.postEvaluationTransform)
  return static_cast< ::CoreML::Specification::GLMRegressor_PostEvaluationTransform >(postevaluationtransform_);
}
void GLMRegressor::set_postevaluationtransform(::CoreML::Specification::GLMRegressor_PostEvaluationTransform value) {
  
  postevaluationtransform_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMRegressor.postEvaluationTransform)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)
