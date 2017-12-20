#include "c7membuffer.h"

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

void* C7MemBuffer::po1(const char* riid) {
    void* ret = nullptr;

    if (riid == RIID_C7MEMBUFFER) {
        ret = (C7MemBuffer*)this;
    } else if (riid == RIID_C7BUFFER_IO) {
        ret = (C7BufferIO*)this;
    } else {
        ret = C7Buffer::po1(riid);
    }
    return ret;
}

