#include "c7oclbuffer.h"

C7OCLBuffer::C7OCLBuffer(std::weak_ptr<C7Obj> outerObj)
    : C7Buffer(outerObj) {
    //ctor
}

C7OCLBuffer::~C7OCLBuffer() {
    //dtor
}

C7OCLBuffer::C7OCLBuffer(const C7OCLBuffer& other)
    : C7Buffer(std::weak_ptr<C7Obj>()) {
    //copy ctor
}

C7OCLBuffer& C7OCLBuffer::operator=(const C7OCLBuffer& rhs) {
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

uint8_t C7OCLBuffer::Type() {
    return BUFFER_TYPE_OPENCL;
}

int32_t C7OCLBuffer::Copy(const std::shared_ptr<C7Buffer> buffer) {
    return C7_OK;
}

int32_t C7OCLBuffer::InitWithData(const uint32_t numofbytes, const char initData) {
    return C7_OK;
}

uint32_t C7OCLBuffer::Read(char* buffer, const uint32_t numofbytes) {
    return 0;
}

uint32_t C7OCLBuffer::Write(const char* buffer, const uint32_t numofbytes) {
    return 0;
}

void* C7OCLBuffer::po1(const char* riid) {
    void* ret = nullptr;

    if(riid == RIID_C7OCLBUFFER) {
        ret = (C7OCLBuffer*)this;
    } else if (riid == RIID_C7BUFFER_IO) {
        ret = (C7BufferIO*)this;
    } else {
        ret = C7Buffer::po1(riid);
    }
    return ret;
}

