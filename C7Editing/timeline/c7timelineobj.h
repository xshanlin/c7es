#ifndef C7TIMELINEOBJ_H
#define C7TIMELINEOBJ_H

#include "../base/C7Obj.h"
#include <list>

#define TIMELINE_HAS_VIDEO  0x01
#define TIMELINE_HAS_AUDIO  0x02
#define TIMELINE_HAS_DATA   0x04

const char* RIID_C7FRAMEPUMP = "{9D0B1786-F495-4023-A2B6-A3F3AB49387C}";

class C7FramePump {
public:
    virtual int32_t Update() = 0;

    virtual int32_t Forward() = 0;
    virtual int32_t Backward() = 0;
    virtual int32_t Seek(int64_t pts, uint32_t flags) = 0;
    virtual int64_t CurrentPTS() = 0;

    virtual int32_t Preroll() = 0;
    virtual int32_t GetFrame() = 0;
};

//
const char* RIID_C7TIMELINE_OBJ = "{7D39B231-924D-4448-9002-CDEC0F7E8783}";

class C7TimelineObj : public C7Obj, public C7FramePump, public std::list<C7TimelineObj> {

    PO1_DECLARATION

public:
    C7TimelineObj(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7TimelineObj();

public:
    virtual std::shared_ptr<C7TimelineObj> Next() const {
        return m_nextObj;
    }
    virtual std::shared_ptr<C7TimelineObj> Prev() const {
        return m_prevObj;
    }
    virtual std::shared_ptr<C7TimelineObj> Parent() const {
        return m_parentObj;
    }

public:
    virtual int32_t Update();

    virtual int32_t Forward();
    virtual int32_t Backward();
    virtual int32_t Seek(int64_t pts, uint32_t flags);
    virtual int64_t CurrentPTS();

    virtual int32_t Preroll();
    virtual int32_t GetFrame();

private:
    std::shared_ptr<C7TimelineObj> m_nextObj, m_prevObj, m_parentObj;
};

#endif // C7TIMELINEOBJ_H
