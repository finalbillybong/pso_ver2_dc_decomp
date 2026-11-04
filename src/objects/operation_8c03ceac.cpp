#include "src/include/classes/TEditor.h"
extern "C" void call_8c03ca54(TEditor *);
extern "C" void call_8c0c5484(void *, float);
extern "C" void operation_8c03ceac(TEditor *o)
{
    o->v6();
    call_8c03ca54(o);
    call_8c0c5484((void *)(((char *)o + 0x20)), o->second);
}
