#ifndef C7OBJ_H
#define C7OBJ_H

#include <memory>

#define C7_OK   0

#define C7_E_FAIL           -6000
#define C7_E_INVALIDARG     -6001
#define C7_E_OUTOFMEMORY    -6002
#define C7_E_NOTIMPL        -6003

#define C7_SUCCEEDED(err)   ((err) >= C7_OK)
#define C7_FAILED(err)      ((err) <= C7_E_FAIL)


#define PO1_DECLARATION     protected: \
                                virtual void* po1(const char* riid);

#define PO1_IMPLEMENTATION_BEGIN(objClass, self_riid) \
                                void* objClass::po1(const char* riid) { \
                                    void* ret = nullptr; \
                                    if (riid == (self_riid)) { \
                                        ret = (objClass*)this;

#define PO1_ITEM_IMPLEMENTATION(objClass, item_riid) \
                                    } else if (riid == (item_riid)) { \
                                        ret = (objClass*)this;

#define PO1_IMPLEMENTATION_END(baseClass) \
                                    } else { \
                                        ret = baseClass::po1(riid); \
                                    } \
                                    return ret; \
                                }


const char* RIID_C7OBJ = "{BAD141BE-84B7-413C-AD72-E18093A44B28}";

class C7Obj {
public:
    C7Obj(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7Obj();

public:
    virtual void* po(const char* riid);

protected:
    virtual void* po1(const char* riid);

private:
    std::weak_ptr<C7Obj> m_outerObj;
};

#endif // C7OBJ_H
