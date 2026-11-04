#include "src/include/classes/TObjHexLine.h"
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct Arg2 Arg2;
typedef struct S_vv12 S_vv12;
struct Frame {
    char f00;
    char unknown1[0x1];
    short f02;
};
struct Arg2 {
    char f00;
};
struct S_vv12 {
    short f00;
    short f02;
};
extern int g_8c33ffb4;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c18e8a0(int, int);
typedef struct Pair { short a; short b; } Pair;
TObjHexLine *TObjHexLine_ctor_8c2571dc(TObjHexLine *o, int a1, Pair *a2)
{
    Pair frame;
    int v1;
    int v10;
    int v11;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c28186c;
    o->tag = (int)(g_8c33ffb4);
    o->size = 0xa4;
    frame = *a2;
    if ((frame.b & 1) != 0) {
        v1 = frame.a;
        if (call_8c18e8a0(v1, 3) == 2) {
            if (0x16 > v1 + 1) {
                frame.a += 1;
            } else {
                frame.a -= 1;
            }
        }
    } else {
        v1 = frame.a;
        if (call_8c18e8a0(v1, 3) == 1) {
            if (0x16 > v1 + 1) {
                frame.a += 1;
            } else {
                frame.a -= 1;
            }
        }
    }
    v10 = (int)((char *)o + 0x20);
    for (v11 = 0; 0x20 > v11; v11++) {
        *(Pair *)(v10 + (v11 << 2)) = frame;
    }
    o->fa0 = 1.0f;
    return o;
}
