// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: addressbook.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dataPacket.pb.h"

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

namespace tutorial {

namespace {

const ::google::protobuf::Descriptor* Person_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Person_reflection_ = NULL;
const ::google::protobuf::Descriptor* Person_PhoneNumber_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Person_PhoneNumber_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor_ = NULL;
const ::google::protobuf::Descriptor* AddressBook_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddressBook_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_addressbook_2eproto() {
  protobuf_AddDesc_addressbook_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "addressbook.proto");
  GOOGLE_CHECK(file != NULL);
  Person_descriptor_ = file->message_type(0);
  static const int Person_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, email_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, phone_),
  };
  Person_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Person_descriptor_,
      Person::default_instance_,
      Person_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _has_bits_[0]),
      -1,
      -1,
      sizeof(Person),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person, _internal_metadata_),
      -1);
  Person_PhoneNumber_descriptor_ = Person_descriptor_->nested_type(0);
  static const int Person_PhoneNumber_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, type_),
  };
  Person_PhoneNumber_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Person_PhoneNumber_descriptor_,
      Person_PhoneNumber::default_instance_,
      Person_PhoneNumber_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, _has_bits_[0]),
      -1,
      -1,
      sizeof(Person_PhoneNumber),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Person_PhoneNumber, _internal_metadata_),
      -1);
  Person_PhoneType_descriptor_ = Person_descriptor_->enum_type(0);
  AddressBook_descriptor_ = file->message_type(1);
  static const int AddressBook_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddressBook, person_),
  };
  AddressBook_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AddressBook_descriptor_,
      AddressBook::default_instance_,
      AddressBook_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddressBook, _has_bits_[0]),
      -1,
      -1,
      sizeof(AddressBook),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddressBook, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_addressbook_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Person_descriptor_, &Person::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Person_PhoneNumber_descriptor_, &Person_PhoneNumber::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AddressBook_descriptor_, &AddressBook::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_addressbook_2eproto() {
  delete Person::default_instance_;
  delete Person_reflection_;
  delete Person_PhoneNumber::default_instance_;
  delete Person_PhoneNumber_reflection_;
  delete AddressBook::default_instance_;
  delete AddressBook_reflection_;
}

void protobuf_AddDesc_addressbook_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021addressbook.proto\022\010tutorial\"\332\001\n\006Person"
    "\022\014\n\004name\030\001 \002(\t\022\n\n\002id\030\002 \002(\005\022\r\n\005email\030\003 \001("
    "\t\022+\n\005phone\030\004 \003(\0132\034.tutorial.Person.Phone"
    "Number\032M\n\013PhoneNumber\022\016\n\006number\030\001 \002(\t\022.\n"
    "\004type\030\002 \001(\0162\032.tutorial.Person.PhoneType:"
    "\004HOME\"+\n\tPhoneType\022\n\n\006MOBILE\020\000\022\010\n\004HOME\020\001"
    "\022\010\n\004WORK\020\002\"/\n\013AddressBook\022 \n\006person\030\001 \003("
    "\0132\020.tutorial.PersonB)\n\024com.example.tutor"
    "ialB\021AddressBookProtos", 342);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "addressbook.proto", &protobuf_RegisterTypes);
  Person::default_instance_ = new Person();
  Person_PhoneNumber::default_instance_ = new Person_PhoneNumber();
  AddressBook::default_instance_ = new AddressBook();
  Person::default_instance_->InitAsDefaultInstance();
  Person_PhoneNumber::default_instance_->InitAsDefaultInstance();
  AddressBook::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_addressbook_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_addressbook_2eproto {
  StaticDescriptorInitializer_addressbook_2eproto() {
    protobuf_AddDesc_addressbook_2eproto();
  }
} static_descriptor_initializer_addressbook_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Person_PhoneType_descriptor_;
}
bool Person_PhoneType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Person_PhoneType Person::MOBILE;
const Person_PhoneType Person::HOME;
const Person_PhoneType Person::WORK;
const Person_PhoneType Person::PhoneType_MIN;
const Person_PhoneType Person::PhoneType_MAX;
const int Person::PhoneType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Person_PhoneNumber::kNumberFieldNumber;
const int Person_PhoneNumber::kTypeFieldNumber;
#endif  // !_MSC_VER

Person_PhoneNumber::Person_PhoneNumber()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.Person.PhoneNumber)
}

void Person_PhoneNumber::InitAsDefaultInstance() {
}

Person_PhoneNumber::Person_PhoneNumber(const Person_PhoneNumber& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tutorial.Person.PhoneNumber)
}

void Person_PhoneNumber::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Person_PhoneNumber::~Person_PhoneNumber() {
  // @@protoc_insertion_point(destructor:tutorial.Person.PhoneNumber)
  SharedDtor();
}

void Person_PhoneNumber::SharedDtor() {
  number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Person_PhoneNumber::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Person_PhoneNumber::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Person_PhoneNumber_descriptor_;
}

const Person_PhoneNumber& Person_PhoneNumber::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_addressbook_2eproto();
  return *default_instance_;
}

Person_PhoneNumber* Person_PhoneNumber::default_instance_ = NULL;

Person_PhoneNumber* Person_PhoneNumber::New(::google::protobuf::Arena* arena) const {
  Person_PhoneNumber* n = new Person_PhoneNumber;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Person_PhoneNumber::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_number()) {
      number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    type_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Person_PhoneNumber::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.Person.PhoneNumber)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string number = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_number()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->number().data(), this->number().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tutorial.Person.PhoneNumber.number");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // optional .tutorial.Person.PhoneType type = 2 [default = HOME];
      case 2: {
        if (tag == 16) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::tutorial::Person_PhoneType_IsValid(value)) {
            set_type(static_cast< ::tutorial::Person_PhoneType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.Person.PhoneNumber)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.Person.PhoneNumber)
  return false;
#undef DO_
}

void Person_PhoneNumber::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.Person.PhoneNumber)
  // required string number = 1;
  if (has_number()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->number().data(), this->number().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Person.PhoneNumber.number");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->number(), output);
  }

  // optional .tutorial.Person.PhoneType type = 2 [default = HOME];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.Person.PhoneNumber)
}

::google::protobuf::uint8* Person_PhoneNumber::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.Person.PhoneNumber)
  // required string number = 1;
  if (has_number()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->number().data(), this->number().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Person.PhoneNumber.number");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->number(), target);
  }

  // optional .tutorial.Person.PhoneType type = 2 [default = HOME];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.Person.PhoneNumber)
  return target;
}

int Person_PhoneNumber::ByteSize() const {
  int total_size = 0;

  // required string number = 1;
  if (has_number()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->number());
  }
  // optional .tutorial.Person.PhoneType type = 2 [default = HOME];
  if (has_type()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Person_PhoneNumber::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Person_PhoneNumber* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Person_PhoneNumber*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Person_PhoneNumber::MergeFrom(const Person_PhoneNumber& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_number()) {
      set_has_number();
      number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.number_);
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Person_PhoneNumber::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person_PhoneNumber::CopyFrom(const Person_PhoneNumber& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person_PhoneNumber::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Person_PhoneNumber::Swap(Person_PhoneNumber* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Person_PhoneNumber::InternalSwap(Person_PhoneNumber* other) {
  number_.Swap(&other->number_);
  std::swap(type_, other->type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Person_PhoneNumber::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Person_PhoneNumber_descriptor_;
  metadata.reflection = Person_PhoneNumber_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Person::kNameFieldNumber;
const int Person::kIdFieldNumber;
const int Person::kEmailFieldNumber;
const int Person::kPhoneFieldNumber;
#endif  // !_MSC_VER

Person::Person()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.Person)
}

void Person::InitAsDefaultInstance() {
}

Person::Person(const Person& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tutorial.Person)
}

void Person::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
  email_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Person::~Person() {
  // @@protoc_insertion_point(destructor:tutorial.Person)
  SharedDtor();
}

void Person::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  email_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Person::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Person::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Person_descriptor_;
}

const Person& Person::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_addressbook_2eproto();
  return *default_instance_;
}

Person* Person::default_instance_ = NULL;

Person* Person::New(::google::protobuf::Arena* arena) const {
  Person* n = new Person;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Person::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    id_ = 0;
    if (has_email()) {
      email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  phone_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Person::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.Person)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tutorial.Person.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // required int32 id = 2;
      case 2: {
        if (tag == 16) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_email;
        break;
      }

      // optional string email = 3;
      case 3: {
        if (tag == 26) {
         parse_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->email().data(), this->email().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tutorial.Person.email");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_phone;
        break;
      }

      // repeated .tutorial.Person.PhoneNumber phone = 4;
      case 4: {
        if (tag == 34) {
         parse_phone:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_phone()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_phone;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.Person)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.Person)
  return false;
#undef DO_
}

void Person::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.Person)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Person.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required int32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // optional string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Person.email");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->email(), output);
  }

  // repeated .tutorial.Person.PhoneNumber phone = 4;
  for (unsigned int i = 0, n = this->phone_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->phone(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.Person)
}

::google::protobuf::uint8* Person::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.Person)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Person.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required int32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // optional string email = 3;
  if (has_email()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tutorial.Person.email");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }

  // repeated .tutorial.Person.PhoneNumber phone = 4;
  for (unsigned int i = 0, n = this->phone_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->phone(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.Person)
  return target;
}

int Person::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_id()) {
    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  return total_size;
}
int Person::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional string email = 3;
  if (has_email()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->email());
  }

  // repeated .tutorial.Person.PhoneNumber phone = 4;
  total_size += 1 * this->phone_size();
  for (int i = 0; i < this->phone_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->phone(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Person::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Person* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Person*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  phone_.MergeFrom(from.phone_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_email()) {
      set_has_email();
      email_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.email_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Person::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->phone())) return false;
  return true;
}

void Person::Swap(Person* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Person::InternalSwap(Person* other) {
  name_.Swap(&other->name_);
  std::swap(id_, other->id_);
  email_.Swap(&other->email_);
  phone_.UnsafeArenaSwap(&other->phone_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Person::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Person_descriptor_;
  metadata.reflection = Person_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AddressBook::kPersonFieldNumber;
#endif  // !_MSC_VER

AddressBook::AddressBook()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.AddressBook)
}

void AddressBook::InitAsDefaultInstance() {
}

AddressBook::AddressBook(const AddressBook& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tutorial.AddressBook)
}

void AddressBook::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AddressBook::~AddressBook() {
  // @@protoc_insertion_point(destructor:tutorial.AddressBook)
  SharedDtor();
}

void AddressBook::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AddressBook::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddressBook::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddressBook_descriptor_;
}

const AddressBook& AddressBook::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_addressbook_2eproto();
  return *default_instance_;
}

AddressBook* AddressBook::default_instance_ = NULL;

AddressBook* AddressBook::New(::google::protobuf::Arena* arena) const {
  AddressBook* n = new AddressBook;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddressBook::Clear() {
  person_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool AddressBook::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.AddressBook)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tutorial.Person person = 1;
      case 1: {
        if (tag == 10) {
         parse_person:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_person()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_person;
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.AddressBook)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.AddressBook)
  return false;
#undef DO_
}

void AddressBook::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.AddressBook)
  // repeated .tutorial.Person person = 1;
  for (unsigned int i = 0, n = this->person_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->person(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.AddressBook)
}

::google::protobuf::uint8* AddressBook::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.AddressBook)
  // repeated .tutorial.Person person = 1;
  for (unsigned int i = 0, n = this->person_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->person(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.AddressBook)
  return target;
}

int AddressBook::ByteSize() const {
  int total_size = 0;

  // repeated .tutorial.Person person = 1;
  total_size += 1 * this->person_size();
  for (int i = 0; i < this->person_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->person(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddressBook::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const AddressBook* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AddressBook*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AddressBook::MergeFrom(const AddressBook& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  person_.MergeFrom(from.person_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void AddressBook::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddressBook::CopyFrom(const AddressBook& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddressBook::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->person())) return false;
  return true;
}

void AddressBook::Swap(AddressBook* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddressBook::InternalSwap(AddressBook* other) {
  person_.UnsafeArenaSwap(&other->person_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddressBook::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddressBook_descriptor_;
  metadata.reflection = AddressBook_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)
