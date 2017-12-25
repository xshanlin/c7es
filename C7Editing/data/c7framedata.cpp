#include "c7framedata.h"

PO1_IMPLEMENTATION_BEGIN(C7FrameData, RIID_C7FRAME_DATA)
//PO1_ITEM_IMPLEMENTATION(C7BufferIO2D, RIID_C7BUFFER_IO_2D)
PO1_IMPLEMENTATION_END(C7Obj)

C7FrameData::C7FrameData(std::weak_ptr<C7Obj> outerObj) : C7Obj(outerObj) {
    //ctor
}

C7FrameData::~C7FrameData() {
    //dtor
}
