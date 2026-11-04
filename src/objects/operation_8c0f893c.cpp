#include "src/include/classes/TObjEneSlimeOne.h"
typedef struct Frame Frame;
typedef struct TObjEneSlimeOne_p3a4 TObjEneSlimeOne_p3a4;
typedef struct TObjEneSlimeOne_p64 TObjEneSlimeOne_p64;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0f7adc(float, float, float, float);
extern "C" void call_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(Frame *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScaleV_8c37e3d0(int, void *);
extern "C" void call_8c1000a8(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c0fad14(TObjEneSlimeOne *);
extern "C" void TObjEneSlimeOne_render_8c0f893c(TObjEneSlimeOne *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 0 && o->f3bc > 0.0f) {
        t2 = o->v11(500.0f, 20.0f);
        if (t2 != 0) {
            if (1.0f > o->f3bc) {
                operation_8c0f7adc(o->f3bc, 0.0f, 0.0f, 0.0f);
            }
            call_8c1086fc();
            njPushMatrixEx_8c38ae68();
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
            (&frame)->f00.f04 += o->f3c0;
            translate_current_matrix_v_8c382a40((Frame *)((&frame)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            njScaleV_8c37e3d0(0, (void *)(((char *)o + 0x3c4)));
            call_8c1000a8((void *)(o->f3a4));
            njPopMatrixEx_8c38ad10();
            call_8c391cc4();
            if (1.0f > o->f3bc) {
                g_8c5755a4 = (int)(g_8c46f574);
                g_8c5755a8 = (int)(g_8c46f578);
                g_8c575570 = (int)(g_8c46f560);
            }
            call_8c0fad14(o);
        }
    }
}
