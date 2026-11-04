#include "src/include/classes/TOChatSensorFolder.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TOChatSensorFolder *TOChatSensorFolder_ctor_8c25ddac(TOChatSensorFolder *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281c88;
    o->tag = (int)(*(int *)0x8c34054c);
    o->size = 0x20;
    *(TOChatSensorFolder **)0x8c513440 = o;
    return o;
}
