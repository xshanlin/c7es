#ifndef C7OCLBUFFER_H
#define C7OCLBUFFER_H

#include "C7Buffer.h"

const char* RIID_C7OCLBUFFER = "{D1DD6429-A55C-4AC1-910D-5B454FC9258A}";

class C7OCLBuffer : public C7Buffer, public C7BufferIO {

    PO1_DECLARATION

public:
    C7OCLBuffer(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7OCLBuffer();
    C7OCLBuffer(const C7OCLBuffer& other);
    C7OCLBuffer& operator=(const C7OCLBuffer& other);

public:
    virtual uint8_t Type();
    virtual int32_t Copy(const std::shared_ptr<C7Buffer> buffer);

public:
    // C7BufferIO
    virtual int32_t InitWithData(const uint32_t numofbytes, const char initData);
    virtual uint32_t Read(char* buffer, const uint32_t numofbytes);
    virtual uint32_t Write(const char* buffer, const uint32_t numofbytes);

private:
};

#endif // C7OCLBUFFER_H
