#include "c7membuffer2d.h"

C7MemBuffer2D::C7MemBuffer2D(std::weak_ptr<C7Obj> outerObj)
    : C7Buffer(outerObj) {
    //ctor
}

C7MemBuffer2D::~C7MemBuffer2D() {
    //dtor
}

C7MemBuffer2D::C7MemBuffer2D(const C7MemBuffer2D& other)
    : C7Buffer(std::weak_ptr<C7Obj>()) {
    //copy ctor
}

C7MemBuffer2D& C7MemBuffer2D::operator=(const C7MemBuffer2D& rhs) {
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

uint8_t C7MemBuffer2D::Type() {
    return BUFFER_TYPE_MEMORY_2D;
}

int32_t C7MemBuffer2D::Copy(const std::shared_ptr<C7Buffer>buffer) {
    return C7_OK;
}

int32_t C7MemBuffer2D::InitWithData(const uint32_t cols, const uint32_t rows, const char initData) {
    return C7_OK;
}

uint32_t C7MemBuffer2D::Read(char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) {
    return 0;
}

uint32_t C7MemBuffer2D::Write(const char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) {
    return 0;
}

void* C7MemBuffer2D::po1(const char* riid) {
    void* ret = nullptr;

    if(riid == RIID_C7MEMBUFFER_2D) {
        ret = (C7MemBuffer2D*)this;
    } else if (riid == RIID_C7BUFFER_IO_2D) {
        ret = (C7BufferIO2D*)this;
    } else {
        ret = C7Buffer::po1(riid);
    }
    return ret;
}

