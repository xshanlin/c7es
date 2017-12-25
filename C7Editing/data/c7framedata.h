#ifndef C7FRAMEDATA_H
#define C7FRAMEDATA_H

#include "C7Obj.h"

const uint8_t COLOR_SPACE_RGBA = 0x01;
const uint8_t COLOR_SPACE_YV12 = 0x02;

const char* RIID_C7FRAME_DATA = "{25A1E23B-A1F7-4B59-9199-67A296AE9450}";

class C7FrameData : public C7Obj
{
    PO1_DECLARATION

    public:
        C7FrameData(std::weak_ptr<C7Obj> outerObj);
        virtual ~C7FrameData();

    public:
        virtual uint8_t Type() = 0;
        virtual int32_t Copy(std::shared_ptr<C7FrameData> frameData) = 0;

    protected:

    private:
};

const char* RIID_FRAMEDATA_IO = "{8B47C172-3D13-466F-8DC8-E31A34826FFE}";

class C7FrameDataIO {
public:
    virtual int32_t InitWithData(const uint32_t numofbytes, const char initData) = 0;
    virtual uint32_t Read(char* buffer, const uint32_t numofbytes) = 0;
    virtual uint32_t Write(const char* buffer, const uint32_t numofbytes) = 0;
};

//
const char* RIID_C7FRAMEDATA_IO_2D = "{6B7C0C3F-25A4-47AC-B355-8AAF89F91C60}";

class C7FrameDataIO2D {
public:
    virtual int32_t InitWithData(const uint32_t cols, const uint32_t rows, const char initData, uint8_t colorspace) = 0;
    virtual uint32_t Read(char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) = 0;
    virtual uint32_t Write(const char* buffer, const uint32_t cols, const uint32_t rows, const uint32_t bytesPerRow) = 0;
};
#endif // C7FRAMEDATA_H
