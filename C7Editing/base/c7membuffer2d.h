#ifndef C7MEMBUFFER2D_H
#define C7MEMBUFFER2D_H

#include "C7Buffer.h"

const char* RIID_C7MEMBUFFER_2D = "{7865F1A7-14AC-4101-B192-38E981805149}";

class C7MemBuffer2D : public C7Buffer, public C7BufferIO2D {

    PO1_DECLARATION

public:
    C7MemBuffer2D(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7MemBuffer2D();
    C7MemBuffer2D(const C7MemBuffer2D& other);
    C7MemBuffer2D& operator=(const C7MemBuffer2D& other);

public:
    virtual uint8_t Type();
    virtual int32_t Copy(const std::shared_ptr<C7Buffer> buffer);

public:
    // C7BufferIO2D
    virtual int32_t InitWithData(const uint32_t cols, const uint32_t rows, const char initData);
    virtual uint32_t Read(char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow);
    virtual uint32_t Write(const char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow);

private:
};

#endif // C7MEMBUFFER2D_H
