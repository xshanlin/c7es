#include "c7obj.h"

C7Obj::C7Obj() {
    //ctor
}

C7Obj::~C7Obj() {
    //dtor
}

void* C7Obj::po(const char* riid) {
    void* ret = nullptr;

    // �����Ľӿ�
    if (riid == RIID_C7OBJ) {
        ret = (C7Obj*)this;
    } else {

        // ��չ�Ľӿ�
        ret = this->po1(riid);
        if (ret == nullptr) {

            // �ھ۵Ľӿ�
            std::shared_ptr<C7Obj> outer = this->Outer();
            if (outer != nullptr) {
                ret = this->Outer()->po1(riid);
            }
        }
    }

    return ret;
}

void* C7Obj::po1(const char* riid) {
    return nullptr;
}

std::shared_ptr<C7Obj> C7Obj::Outer() {
    return nullptr;
}
