// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_one.HelloWorld.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test_one.HelloWorld.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace test_one {

namespace {

const ::google::protobuf::Descriptor* HelloWorld_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HelloWorld_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_5fone_2eHelloWorld_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_5fone_2eHelloWorld_2eproto() {
  protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test_one.HelloWorld.proto");
  GOOGLE_CHECK(file != NULL);
  HelloWorld_descriptor_ = file->message_type(0);
  static const int HelloWorld_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloWorld, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloWorld, str_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloWorld, opt_),
  };
  HelloWorld_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HelloWorld_descriptor_,
      HelloWorld::internal_default_instance(),
      HelloWorld_offsets_,
      -1,
      -1,
      -1,
      sizeof(HelloWorld),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HelloWorld, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_5fone_2eHelloWorld_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HelloWorld_descriptor_, HelloWorld::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_5fone_2eHelloWorld_2eproto() {
  HelloWorld_default_instance_.Shutdown();
  delete HelloWorld_reflection_;
}

void protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  HelloWorld_default_instance_.DefaultConstruct();
  HelloWorld_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto_once_);
void protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto_once_,
                 &protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto_impl);
}
void protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031test_one.HelloWorld.proto\022\010test_one\"2\n"
    "\nHelloWorld\022\n\n\002id\030\001 \001(\005\022\013\n\003str\030\002 \001(\t\022\013\n\003"
    "opt\030\003 \001(\005b\006proto3", 97);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test_one.HelloWorld.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_5fone_2eHelloWorld_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto_once_);
void protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto_once_,
                 &protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_5fone_2eHelloWorld_2eproto {
  StaticDescriptorInitializer_test_5fone_2eHelloWorld_2eproto() {
    protobuf_AddDesc_test_5fone_2eHelloWorld_2eproto();
  }
} static_descriptor_initializer_test_5fone_2eHelloWorld_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HelloWorld::kIdFieldNumber;
const int HelloWorld::kStrFieldNumber;
const int HelloWorld::kOptFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HelloWorld::HelloWorld()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:test_one.HelloWorld)
}

void HelloWorld::InitAsDefaultInstance() {
}

HelloWorld::HelloWorld(const HelloWorld& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:test_one.HelloWorld)
}

void HelloWorld::SharedCtor() {
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, reinterpret_cast<char*>(&opt_) -
    reinterpret_cast<char*>(&id_) + sizeof(opt_));
  _cached_size_ = 0;
}

HelloWorld::~HelloWorld() {
  // @@protoc_insertion_point(destructor:test_one.HelloWorld)
  SharedDtor();
}

void HelloWorld::SharedDtor() {
  str_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HelloWorld::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HelloWorld::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HelloWorld_descriptor_;
}

const HelloWorld& HelloWorld::default_instance() {
  protobuf_InitDefaults_test_5fone_2eHelloWorld_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<HelloWorld> HelloWorld_default_instance_;

HelloWorld* HelloWorld::New(::google::protobuf::Arena* arena) const {
  HelloWorld* n = new HelloWorld;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HelloWorld::Clear() {
// @@protoc_insertion_point(message_clear_start:test_one.HelloWorld)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(HelloWorld, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<HelloWorld*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(id_, opt_);
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool HelloWorld::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test_one.HelloWorld)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_str;
        break;
      }

      // optional string str = 2;
      case 2: {
        if (tag == 18) {
         parse_str:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->str().data(), this->str().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "test_one.HelloWorld.str"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_opt;
        break;
      }

      // optional int32 opt = 3;
      case 3: {
        if (tag == 24) {
         parse_opt:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opt_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
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
  // @@protoc_insertion_point(parse_success:test_one.HelloWorld)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test_one.HelloWorld)
  return false;
#undef DO_
}

void HelloWorld::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test_one.HelloWorld)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string str = 2;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "test_one.HelloWorld.str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->str(), output);
  }

  // optional int32 opt = 3;
  if (this->opt() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->opt(), output);
  }

  // @@protoc_insertion_point(serialize_end:test_one.HelloWorld)
}

::google::protobuf::uint8* HelloWorld::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:test_one.HelloWorld)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string str = 2;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->str().data(), this->str().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "test_one.HelloWorld.str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->str(), target);
  }

  // optional int32 opt = 3;
  if (this->opt() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->opt(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:test_one.HelloWorld)
  return target;
}

size_t HelloWorld::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test_one.HelloWorld)
  size_t total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // optional string str = 2;
  if (this->str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->str());
  }

  // optional int32 opt = 3;
  if (this->opt() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->opt());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HelloWorld::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test_one.HelloWorld)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const HelloWorld* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const HelloWorld>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test_one.HelloWorld)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test_one.HelloWorld)
    UnsafeMergeFrom(*source);
  }
}

void HelloWorld::MergeFrom(const HelloWorld& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test_one.HelloWorld)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void HelloWorld::UnsafeMergeFrom(const HelloWorld& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.str().size() > 0) {

    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
  if (from.opt() != 0) {
    set_opt(from.opt());
  }
}

void HelloWorld::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test_one.HelloWorld)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HelloWorld::CopyFrom(const HelloWorld& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test_one.HelloWorld)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool HelloWorld::IsInitialized() const {

  return true;
}

void HelloWorld::Swap(HelloWorld* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HelloWorld::InternalSwap(HelloWorld* other) {
  std::swap(id_, other->id_);
  str_.Swap(&other->str_);
  std::swap(opt_, other->opt_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HelloWorld::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HelloWorld_descriptor_;
  metadata.reflection = HelloWorld_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HelloWorld

// optional int32 id = 1;
void HelloWorld::clear_id() {
  id_ = 0;
}
::google::protobuf::int32 HelloWorld::id() const {
  // @@protoc_insertion_point(field_get:test_one.HelloWorld.id)
  return id_;
}
void HelloWorld::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:test_one.HelloWorld.id)
}

// optional string str = 2;
void HelloWorld::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& HelloWorld::str() const {
  // @@protoc_insertion_point(field_get:test_one.HelloWorld.str)
  return str_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HelloWorld::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test_one.HelloWorld.str)
}
void HelloWorld::set_str(const char* value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test_one.HelloWorld.str)
}
void HelloWorld::set_str(const char* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test_one.HelloWorld.str)
}
::std::string* HelloWorld::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:test_one.HelloWorld.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HelloWorld::release_str() {
  // @@protoc_insertion_point(field_release:test_one.HelloWorld.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HelloWorld::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:test_one.HelloWorld.str)
}

// optional int32 opt = 3;
void HelloWorld::clear_opt() {
  opt_ = 0;
}
::google::protobuf::int32 HelloWorld::opt() const {
  // @@protoc_insertion_point(field_get:test_one.HelloWorld.opt)
  return opt_;
}
void HelloWorld::set_opt(::google::protobuf::int32 value) {
  
  opt_ = value;
  // @@protoc_insertion_point(field_set:test_one.HelloWorld.opt)
}

inline const HelloWorld* HelloWorld::internal_default_instance() {
  return &HelloWorld_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace test_one

// @@protoc_insertion_point(global_scope)
