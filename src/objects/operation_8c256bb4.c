#include "src/include/classes/TObjHexLine.h"
typedef struct Block16 {
    int words[4];
} Block16;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void TObjHexLine_create_8c257198(int, int);
TObjHexLine *TObjHexLine_ctor_8c256bb4(TObjHexLine *o, int a1)
{
    TObjHexLine **home = &o;
    int v1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281888;
    o->tag = (int)(*(int *)0x8c33ffb4);
    o->size = 0x24;
    v1 = (int)0;
    while (4 > v1) {
        TObjHexLine_create_8c257198(a1, (int)(&*(int *)((char *)0x8c33ff8c + (v1 << 2))));
        v1 = (int)(v1 + 1);
    }
    *(Block16 *)&*(Block16 *)0x8c513340 = *(Block16 *)&*(Block16 *)0x8c33ff9c;
    o->f20 = 0x1e;
    return o;
}
