#ifndef C7RENDEROBJ_H
#define C7RENDEROBJ_H

#include "C7Obj.h"
#include "C7TimelineObj.h"
#include <functional>

class C7RenderEvent {
public:
    virtual uint32_t Code() = 0;
    virtual void* Data() = 0;
};

const char* RIID_C7RENDER_OBJ = "{2CF24937-C63C-4804-B06A-49A632B2E288}";

class C7RenderObj : public C7Obj {
    PO1_DECLARATION

public:
    C7RenderObj(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7RenderObj();

public:
    virtual int32_t SetCallback(std::function<void(C7RenderEvent &event, void* userData)>, void* userData);
    virtual int32_t Update();

    virtual int32_t Forward();
    virtual int32_t Backward();
    virtual int32_t Seek(int64_t pts, uint32_t flags);
    virtual int64_t CurrentPTS();

    virtual int32_t GetFrame();

protected:

private:
    std::shared_ptr<C7TimelineObj> m_timelineObj;
};

#endif // C7RENDEROBJ_H
