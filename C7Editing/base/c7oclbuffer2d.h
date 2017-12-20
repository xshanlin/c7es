#ifndef C7OCLBUFFER2D_H
#define C7OCLBUFFER2D_H

#include "C7Buffer.h"

const char* RIID_C7OCLBUFFER_2D = "{5A96F643-6D36-46E7-9014-1EE88C9FAD1A}";

class C7OCLBuffer2D : public C7Buffer, public C7BufferIO2D {
public:
    C7OCLBuffer2D(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7OCLBuffer2D();
    C7OCLBuffer2D(const C7OCLBuffer2D& other);
    C7OCLBuffer2D& operator=(const C7OCLBuffer2D& other);

public:
    virtual uint8_t Type();
    virtual int32_t Copy(const std::shared_ptr<C7Buffer> buffer);

public:
    // C7BufferIO2D
    virtual int32_t InitWithData(const uint32_t cols, const uint32_t rows, const char initData);
    virtual uint32_t Read(char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow);
    virtual uint32_t Write(const char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow);

protected:
    virtual void* po1(const char* riid);

private:
};

#endif // C7OCLBUFFER2D_H
