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

const char* RIID_C7OBJ = "{BAD141BE-84B7-413C-AD72-E18093A44B28}";

class C7Obj {
public:
    C7Obj();
    virtual ~C7Obj();

public:
    virtual void* po(const char* riid);

protected:
    virtual void* po1(const char* riid);

private:
    virtual std::shared_ptr<C7Obj> Outer();
};

#endif // C7OBJ_H
