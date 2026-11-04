#include "src/include/classes/TObjEneSaver.h"
typedef struct Frame Frame;
typedef struct S_g8c46f3a4 S_g8c46f3a4;
typedef struct S_g8c46f3a4_0 S_g8c46f3a4_0;
typedef struct S_g8c46f3ac S_g8c46f3ac;
typedef struct TObjEneSaver_p334 TObjEneSaver_p334;
typedef struct TObjEneSaver_pdc TObjEneSaver_pdc;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct TObjEneSaver_p334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_g8c46f3ac {
    float f00;
};
struct TObjEneSaver_pdc {
    char unknown0[0x18];
    int f18;
};
extern S_g8c46f3a4 *g_8c46f3a4;
extern S_g8c46f3ac *g_8c46f3ac;
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float call_8c130334(float, float);
extern void call_8c0121a0(TObjEneSaver *, int, void *, int);
void TObjEneSaver_v68_8c0bdf2c(TObjEneSaver *o)
{
    Frame frame;
    float t1;
    int a;
    if (o->f398 != 0) {
        if (o->f398 == 1) {
            goto L_8c0bdfd6;
        }
        if (o->f398 == 2) {
            goto L_8c0bdfc2;
        }
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f324;
    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
    t1 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    a = (int)(t1 * 65536.0f / 6.28318405f);
    o->f30a = 4;
    if (0x10 > a) {
        o->f30c = 1;
        o->ff0 = 2;
        o->f108 = g_8c46f3ac->f00;
        o->fe8 |= 0x100;
    } else {
        o->f30c = 0;
        o->ff0 = 1;
        goto L_8c0bdfe8;
L_8c0bdfc2:;
        o->f30a = 5;
        o->f30c = 0;
        o->ff0 = 3;
        goto L_8c0bdfe8;
L_8c0bdfd6:;
        o->f30a = 6;
        o->f30c = 0;
        o->ff0 = 4;
    }
L_8c0bdfe8:;
    call_8c0121a0(o, 0, (void *)(*(S_g8c46f3a4_0 **)((char *)((char *)g_8c46f3a4 + 0x0) + (o->f398 << 2))), 0);
    o->fdc->f18 |= 1;
    o->f34 &= -0x6040001;
    o->f34 |= 0x200000;
}
