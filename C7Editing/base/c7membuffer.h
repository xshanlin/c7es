#ifndef C7MEMBUFFER_H
#define C7MEMBUFFER_H

#include "C7Buffer.h"

const char* RIID_C7MEMBUFFER = "{AC9F567C-96B1-405E-ABAC-B63A4DAF0A1E}";

class C7MemBuffer : public C7Buffer, public C7BufferIO {
public:
    C7MemBuffer(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7MemBuffer();
    C7MemBuffer(const C7MemBuffer& other);
    C7MemBuffer& operator=(const C7MemBuffer& other);

public:
    virtual uint8_t Type();
    virtual int32_t Copy(const std::shared_ptr<C7Buffer> buffer);

public:
    // C7BufferIO
    virtual int32_t InitWithData(const uint32_t numofbytes, const char initData);
    virtual uint32_t Read(char* buffer, const uint32_t numofbytes);
    virtual uint32_t Write(const char* buffer, const uint32_t numofbytes);

protected:
    virtual void* po1(const char* riid);

private:
};

#endif // C7MEMBUFFER_H
