#include "src/include/classes/TObjEneBeast.h"
typedef struct Frame Frame;
typedef struct TObjEneBeast_p28 TObjEneBeast_p28;
typedef struct TObjEneBeast_p38 TObjEneBeast_p38;
typedef struct Arg0_3e0 Arg0_3e0;
typedef struct TObjEneBeast_p64 TObjEneBeast_p64;
typedef struct Arg0_s3cc Arg0_s3cc;
struct Arg0_s3cc {
    char unknown0[0x14];
    Arg0_3e0 *f14;
};
struct Arg0_3e0 {
    char unknown0[0x20];
    int f20;
    int f24;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern "C" int operation_8c05bbf8(void);
extern "C" void update_context_blend(void *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c013c58(TObjEneBeast *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c1086fc(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c04a9e0(TObjEneBeast *, Frame *);
extern "C" void TObjEneBeast_render_8c0e58d0(TObjEneBeast *o)
{
    Frame frame;
    int v9;
    int t1;
    int t2;
    int t3;
    int t4;
    v9 = (int)0;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        update_context_blend((void *)(((char *)o + 0x3cc)));
        t4 = update_depth_mode((void *)(((char *)o + 0x3cc)), (void *)(((char *)o + 0x324)));
        v9 = (int)t4;
    }
    t2 = o->v12(200.0f, 400.0f, 30.0f);
    if (t2 != 0) {
        call_8c013c58(o);
        call_8c3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, 0.0f, o->f39c, 0.0f);
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        t3 = operation_8c03d338();
        if (t3 == 1) {
            call_8c3aa716((void *)(o->f38));
        } else {
            call_8c1086fc();
            if (v9 != 0) {
                ((void (*)(void *))(((Arg0_s3cc *)((char *)o + 0x3cc))->f14->f20))((void *)(((char *)o + 0x3cc)));
            }
            if (t2 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            call_8c391cc4();
            if (v9 != 0) {
                ((void (*)(void *))(((Arg0_s3cc *)((char *)o + 0x3cc))->f14->f24))((void *)(((char *)o + 0x3cc)));
            }
        }
        njPopMatrixEx_8c38ad10();
        operation_8c013e74();
        if (o->f30a != 8 && o->f30a != 9) {
            (&frame)->f00 = 1.5f;
            (&frame)->f04 = 1.0f;
            (&frame)->f08 = 2.0f;
            call_8c04a9e0(o, (Frame *)((&frame)));
        }
    }
}
