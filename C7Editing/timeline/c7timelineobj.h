#ifndef C7TIMELINEOBJ_H
#define C7TIMELINEOBJ_H

#include "../base/C7Obj.h"

const char* RIID_C7TIMELINE_OBJ = "{7D39B231-924D-4448-9002-CDEC0F7E8783}";

class C7TimelineObj : public C7Obj {

    PO1_DECLARATION

public:
    C7TimelineObj(std::weak_ptr<C7Obj> outerObj);
    virtual ~C7TimelineObj();

private:
};

#endif // C7TIMELINEOBJ_H
