#include "src/include/classes/TObjEneBm5Wolf.h"
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_8 S_frame_8;
typedef struct TObjEneBm5Wolf_p28 TObjEneBm5Wolf_p28;
typedef struct TObjEneBm5Wolf_p400 TObjEneBm5Wolf_p400;
typedef struct TObjEneBm5Wolf_p64 TObjEneBm5Wolf_p64;
struct Frame {
    S_frame_0 *f00;
    char unknown4[0x4];
    S_frame_8 *f08;
};
extern float g_8c284bd4;
extern float g_8c284bd8;
extern int g_8c4688a8;
extern int g_8c4688ac;
extern "C" int operation_8c03d338(void);
extern "C" int operation_8c05bae8(void);
extern "C" void call_8c0c5094(void *, Frame *, void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c11a920(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c05b9dc(TObjEneBm5Wolf *);
extern "C" void call_8c3827d8(void *);
extern "C" int call_8c18e768(void *, int);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c1086fc(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c05b9e8(TObjEneBm5Wolf *);
extern "C" void call_8c391cc4(void);
extern "C" void TObjEneBm5Wolf_render_8c064a4c(TObjEneBm5Wolf *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v111();
        return;
    }
    switch (o->f424 & 2) {
    case 0:
        if (o->f30a == 0x11) {
            return;
        }
        t2 = operation_8c05bae8();
        if (t2 != 0) {
            t5 = o->v12(g_8c284bd8, g_8c284bd4, 20.0f);
            v1 = (int)t5;
        } else {
            t3 = o->v11(400.0f, 20.0f);
            if (t3 != 0) {
                v1 = (int)1;
            } else {
                v1 = (int)0;
            }
        }
        if (v1 == 0) {
        } else {
            if (o->f30a != 0x10) {
                call_8c0c5094((void *)(((char *)o + 0x170)), (Frame *)((&frame)), (void *)(&(&frame)->f08));
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                njTranslate_8c3829bc(0, 0.0f, 0.3f, 0.0f);
                njRotateZ_8c37e02c(0, (void *)((&frame)->f08));
                njRotateX_8c37dd28(0, (void *)((&frame)->f00));
                njRotateY_8c37df90(0, (void *)(o->f64));
                njTranslate_8c3829bc(0, 0.0f, 0.0f, -10.0f);
                njScale_8c37e2e4(0, 1.2f, 1.0f, 3.0f);
                njRotateX_8c37dd28(0, (void *)-0x4000);
                call_8c11a920();
                njPopMatrixEx_8c38ad10();
            }
            call_8c05b9dc(o);
            call_8c3827d8((void *)(o->f28));
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            njTranslate_8c3829bc(0, 0.0f, 0.0f, -10.0f);
            if (((o->f424 & 4)) != 0) {
                njTranslate_8c3829bc(0, 0.0f, o->f428, 0.0f);
            }
            g_8c4688a8 = 0;
            t4 = call_8c18e768((void *)(o->f400), 2);
            g_8c4688ac = -t4;
            set_transform_node_callback((void *)((void *)0x8c064a14));
            operation_8c05baa8();
            call_8c1086fc();
            if (v1 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            set_transform_node_callback((void *)0);
            njPopMatrixEx_8c38ad10();
            call_8c05b9e8(o);
        }
        call_8c391cc4();
    }
}
