#include "c7timelineobj.h"

PO1_IMPLEMENTATION_BEGIN(C7TimelineObj, RIID_C7TIMELINE_OBJ)
PO1_ITEM_IMPLEMENTATION(C7FramePump, RIID_C7FRAMEPUMP)
PO1_IMPLEMENTATION_END(C7Obj)

C7TimelineObj::C7TimelineObj(std::weak_ptr<C7Obj> outerObj)
    : C7Obj(outerObj) {
    //ctor
}

C7TimelineObj::~C7TimelineObj() {
    //dtor
}

int32_t C7TimelineObj::Update() {
    return C7_OK;
}

int32_t C7TimelineObj::Forward() {
    return C7_OK;
}

int32_t C7TimelineObj::Backward() {
    return C7_OK;
}

int32_t C7TimelineObj::Seek(int64_t pts, uint32_t flags) {
    return C7_OK;
}

int64_t C7TimelineObj::CurrentPTS() {
    return C7_OK;
}

int32_t C7TimelineObj::Preroll() {
    return C7_OK;
}

int32_t C7TimelineObj::GetFrame() {
    return C7_OK;
}
