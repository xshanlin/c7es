#include "c7timelineobj.h"

PO1_IMPLEMENTATION_BEGIN(C7TimelineObj, RIID_C7TIMELINE_OBJ)
//PO1_ITEM_IMPLEMENTATION(C7BufferIO, RIID_C7BUFFER_IO)
PO1_IMPLEMENTATION_END(C7Obj)

C7TimelineObj::C7TimelineObj(std::weak_ptr<C7Obj> outerObj)
    : C7Obj(outerObj) {
    //ctor
}

C7TimelineObj::~C7TimelineObj() {
    //dtor
}


