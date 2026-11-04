#include "src/include/classes/TObjEneRe2Flower.h"
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct TObjEneRe2Flower_p28 TObjEneRe2Flower_p28;
typedef struct Arg0_28_0 Arg0_28_0;
typedef struct TObjEneRe2Flower_p38 TObjEneRe2Flower_p38;
typedef struct TObjEneRe2Flower_p64 TObjEneRe2Flower_p64;
struct Frame {
    Vector3 f00;
};
struct TObjEneRe2Flower_p28 {
    Arg0_28_0 *f00;
};
struct Arg0_28_0 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x8];
    int f14;
    char unknown18[0x8];
    int f20;
    char unknown24[0x8];
    int f2c;
};
extern Vector3 g_8c2f374c;
extern "C" void call_8c05ba9c(TObjEneRe2Flower *, Frame *);
extern "C" void call_8c3827d8(TObjEneRe2Flower_p28 *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjEneRe2Flower_v111_8c05e6cc(TObjEneRe2Flower *o)
{
    Frame frame;
    char *v1;
    int v6;
    char *v2;
    int v5;
    int t1;
    int mask;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c2f374c;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c05ba9c(o, (Frame *)((&frame)));
        mask = 0x400;
        if (((o->f3e0 & mask)) != 0) {
            v1 = (char *)o->f28->f00->f08;
            v2 = (char *)o->f28->f00->f14;
            o->f28->f00->f08 = (int)(o->f28->f00->f20);
            o->f28->f00->f14 = (int)(o->f28->f00->f2c);
            v5 = (int)v2;
            v6 = (int)v1;
        }
        call_8c3827d8((TObjEneRe2Flower_p28 *)(o->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        operation_8c05baa8();
        operation_8c1086fc();
        call_8c3aa716((void *)(o->f38));
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
        if (((o->f3e0 & 0x400)) != 0) {
            o->f28->f00->f08 = (int)v6;
            o->f28->f00->f14 = (int)v5;
        }
    }
}
