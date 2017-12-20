#include "c7oclbuffer2d.h"

C7OCLBuffer2D::C7OCLBuffer2D(std::weak_ptr<C7Obj> outerObj)
    : C7Buffer(outerObj) {
    //ctor
}

C7OCLBuffer2D::~C7OCLBuffer2D() {
    //dtor
}

C7OCLBuffer2D::C7OCLBuffer2D(const C7OCLBuffer2D& other)
    : C7Buffer(std::weak_ptr<C7Obj>()) {
    //copy ctor
}

C7OCLBuffer2D& C7OCLBuffer2D::operator=(const C7OCLBuffer2D& rhs) {
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

uint8_t C7OCLBuffer2D::Type() {
    return BUFFER_TYPE_OPENCL_2D;
}

int32_t C7OCLBuffer2D::Copy(const std::shared_ptr<C7Buffer>buffer) {
    return C7_OK;
}

int32_t C7OCLBuffer2D::InitWithData(const uint32_t cols, const uint32_t rows, const char initData) {
    return C7_OK;
}

uint32_t C7OCLBuffer2D::Read(char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) {
    return 0;
}

uint32_t C7OCLBuffer2D::Write(const char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) {
    return 0;
}

void* C7OCLBuffer2D::po1(const char* riid) {
    void* ret = nullptr;

    if(riid == RIID_C7OCLBUFFER_2D) {
        ret = (C7OCLBuffer2D*)this;
    } else if (riid == RIID_C7BUFFER_IO_2D) {
        ret = (C7BufferIO2D*)this;
    } else {
        ret = C7Buffer::po1(riid);
    }
    return ret;
}

