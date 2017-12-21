#include "c7buffer.h"

PO1_IMPLEMENTATION_BEGIN(C7Buffer, RIID_C7BUFFER)
PO1_IMPLEMENTATION_END(C7Obj)

C7Buffer::C7Buffer(std::weak_ptr<C7Obj> outerObj)
    : C7Obj(outerObj) {
    //ctor
}

C7Buffer::~C7Buffer() {
    //dtor
}
