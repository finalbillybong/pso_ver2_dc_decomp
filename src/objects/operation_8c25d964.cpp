#include "src/include/object_vtable.h"
#include "src/include/classes/TOChatSensor.h"
typedef struct S_g8c513444 S_g8c513444;
typedef struct S_g8c513444_4 S_g8c513444_4;
typedef struct S_g8c513444_4__4 S_g8c513444_4__4;
struct S_g8c513444 {
    char unknown0[0x4];
    S_g8c513444_4 *f04;
};
extern "C" void TObjectShared_ctor_8c01d1ec(TOChatSensor *);
extern "C" void call_8c25db38(TOChatSensor *);
extern "C" void operation_8c25dd0c(void *, int);
extern "C" TOChatSensor *TOChatSensor_ctor_8c25d964(TOChatSensor *o, int a1, int a2)
{
    TOChatSensor **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c281ca4;
    o->tag = (int)(*(int *)0x8c340548);
    o->size = 0xd4;
    o->v6(a2);
    o->fc8 = 0;
    o->fa4 = 0;
    call_8c25db38(o);
    if (o->fd0 > 0) {
        operation_8c25dd0c((void *)o, (int)(*(S_g8c513444_4__4 **)((char *)((char *)(*(S_g8c513444 **)0x8c513444)->f04 - 0x4) + (o->fd0 << 2))));
    }
    return o;
}
