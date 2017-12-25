#include "c7renderobj.h"

PO1_IMPLEMENTATION_BEGIN(C7RenderObj, RIID_C7RENDER_OBJ)
//PO1_ITEM_IMPLEMENTATION(C7BufferIO, RIID_C7BUFFER_IO)
PO1_IMPLEMENTATION_END(C7Obj)

C7RenderObj::C7RenderObj(std::weak_ptr<C7Obj> outerObj) : C7Obj(outerObj) {
    //ctor
}

C7RenderObj::~C7RenderObj() {
    //dtor
}

int32_t C7RenderObj::SetCallback(std::function<void(C7RenderEvent& event, void* userData)>, void* userData) {
    return C7_OK;
}

int32_t C7RenderObj::Update() {
    return C7_OK;
}

int32_t C7RenderObj::Forward() {
    return C7_OK;
}

int32_t C7RenderObj::Backward() {
    return C7_OK;
}

int32_t C7RenderObj::Seek(int64_t pts, uint32_t flags) {
    return C7_OK;
}

int64_t C7RenderObj::CurrentPTS() {
    return 0;
}

int32_t C7RenderObj::GetFrame() {
    return C7_OK;
}
