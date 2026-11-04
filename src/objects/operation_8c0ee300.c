#include "src/include/classes/TFontSmallTask.h"
typedef struct S_g8c44bea0 S_g8c44bea0;
extern char g_8c308df8[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c0ee474(TFontSmallTask *, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c18eb44(int);
extern void strncpy_8c12b154(void *, void *, int);
extern int call_8c087268(void *);
TFontSmallTask *TFontSmallTask_ctor_4_8c0ee300(TFontSmallTask *o, int a1, int a2, int a3, int a4, int a5, register short a6)
{
    TFontSmallTask **home = &o;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)(*(S_g8c44bea0 **)0x8c44bea0));
    o->vtable = (void *)0x8c268060;
    o->tag = (int)(*(int *)0x8c308de8);
    o->size = 0x50;
    t1 = call_8c0ee474(o, a1);
    if (t1 == 0) {
        return o;
    }
    o->f3c = a2 & 0xffffff;
    o->f40 = 0;
    o->f44 = a3;
    o->f48 = a4;
    o->f4c = 0;
    o->f04 |= 0x10;
    reset_text_cursor_8c18ea38();
    operation_8c18ea4c(a5);
    if (a6 >= 0) {
        operation_8c18ea4c((int)(g_8c308df8 + 0xf));
    }
    operation_8c18eb44((int)((int)a6));
    strncpy_8c12b154((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c4dbe40), 0xf);
    o->f3b = 0;
    t2 = call_8c087268((void *)(((char *)o + 0x2c)));
    o->f28 = (float)(unsigned int)t2;
    o->f20 -= o->f28 * 0.5f * 1.4f;
    return o;
}
