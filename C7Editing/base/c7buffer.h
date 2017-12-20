#ifndef C7BUFFER_H
#define C7BUFFER_H

#include <C7Obj.h>

const uint8_t BUFFER_TYPE_MEMORY = 0x01;
const uint8_t BUFFER_TYPE_MEMORY_2D = 0x02;
const uint8_t BUFFER_TYPE_OPENCL = 0x04;
const uint8_t BUFFER_TYPE_OPENCL_2D = 0x08;

//
const char* RIID_C7BUFFER = "{FC64E62E-5283-4FFD-AA6B-AB3FED5F0093}";

class C7Buffer : public C7Obj {
public:
    C7Buffer(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7Buffer();

public:
    virtual uint8_t Type() = 0;
    virtual int32_t Copy(const std::shared_ptr<C7Buffer> buffer) = 0;

protected:
    virtual void* po1(const char* riid);

private:
    virtual std::shared_ptr<C7Obj> Outer();

private:
    std::weak_ptr<C7Obj> m_outerObj;
};

//
const char* RIID_C7BUFFER_IO = "{F961D915-0694-4640-A3D2-1DBE94699253}";

class C7BufferIO {
public:
    virtual int32_t InitWithData(const uint32_t numofbytes, const char initData) = 0;
    virtual uint32_t Read(char* buffer, const uint32_t numofbytes) = 0;
    virtual uint32_t Write(const char* buffer, const uint32_t numofbytes) = 0;
};

//
const char* RIID_C7BUFFER_IO_2D = "{A2BFF596-1538-4155-B260-5D57D975A518}";

class C7BufferIO2D {
public:
    virtual int32_t InitWithData(const uint32_t cols, const uint32_t rows, const char initData) = 0;
    virtual uint32_t Read(char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) = 0;
    virtual uint32_t Write(const char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) = 0;
};

#endif // C7BUFFER_H
