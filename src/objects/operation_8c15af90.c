#include "src/include/classes/TObjVoloptShutter.h"
typedef struct S_g8c44be94 S_g8c44be94;
extern void TObject_ctor_8c0330e4(void *, void *);
TObjVoloptShutter *TObjVoloptShutter_ctor_8c15af90(TObjVoloptShutter *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)(*(S_g8c44be94 **)0x8c44be94));
    o->vtable = (void *)0x8c26ee88;
    o->tag = (int)(*(int *)0x8c316650);
    o->size = 0x38;
    o->f20 = a1;
    o->f34 = (int)((float)(-0x5a - a1 * 0x3c) * 65536.0f / 360.0f);
    o->f2c = 0.0f;
    o->f30 = 0.0f;
    return o;
}
