#include "c7membuffer.h"

PO1_IMPLEMENTATION_BEGIN(C7MemBuffer, RIID_C7MEMBUFFER)
PO1_ITEM_IMPLEMENTATION(C7BufferIO, RIID_C7BUFFER_IO)
PO1_IMPLEMENTATION_END(C7Buffer)

C7MemBuffer::C7MemBuffer(std::weak_ptr<C7Obj> outerObj)
    : C7Buffer(outerObj) {
    //ctor
}

C7MemBuffer::~C7MemBuffer() {
    //dtor
}

C7MemBuffer::C7MemBuffer(const C7MemBuffer& other)
    : C7Buffer(std::weak_ptr<C7Obj>()) {
    //copy ctor
}

C7MemBuffer& C7MemBuffer::operator=(const C7MemBuffer& rhs) {
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

uint8_t C7MemBuffer::Type() {
    return BUFFER_TYPE_MEMORY;
}

int32_t C7MemBuffer::Copy(const std::shared_ptr<C7Buffer> buffer) {
    return C7_OK;
}

int32_t C7MemBuffer::InitWithData(const uint32_t numofbytes, const char initData) {
    return C7_OK;
}

uint32_t C7MemBuffer::Read(char* buffer, const uint32_t numofbytes) {
    return 0;
}

uint32_t C7MemBuffer::Write(const char* buffer, const uint32_t numofbytes) {
    return 0;
}


