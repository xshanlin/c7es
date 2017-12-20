#include "c7buffer.h"

C7Buffer::C7Buffer(std::weak_ptr<C7Obj> outerObj)
    : m_outerObj(outerObj) {
    //ctor
}

C7Buffer::~C7Buffer() {
    //dtor
}

void* C7Buffer::po1(const char* riid) {
    void* ret = nullptr;

    if (riid == RIID_C7BUFFER) {
        ret = (C7Buffer*)this;
    } else {
        ret = C7Obj::po1(riid);
    }

    return ret;
}

std::shared_ptr<C7Obj> C7Buffer::Outer() {
    std::shared_ptr<C7Obj> ret = m_outerObj.lock();
    return ret;
}
