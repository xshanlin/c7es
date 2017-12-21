#include "c7obj.h"

C7Obj::C7Obj(std::weak_ptr<C7Obj> outerObj)
    : m_outerObj(outerObj) {
    //ctor
}

C7Obj::~C7Obj() {
    //dtor
}

void* C7Obj::po(const char* riid) {
    void* ret = nullptr;

    // 基础的接口
    if (riid == RIID_C7OBJ) {
        ret = (C7Obj*)this;
    } else {

        // 扩展的接口
        ret = this->po1(riid);
        if (ret == nullptr) {

            // 内聚的接口
            std::shared_ptr<C7Obj> outer = m_outerObj.lock();
            if (outer != nullptr) {
                ret = outer->po1(riid);
            }
        }
    }

    return ret;
}

void* C7Obj::po1(const char* riid) {
    return nullptr;
}
