#include "src/include/classes/TORainbowCave01.h"
typedef struct Frame Frame;
typedef struct TORainbowCave01_p28 TORainbowCave01_p28;
typedef struct TORainbowCave01_p38 TORainbowCave01_p38;
typedef struct TORainbowCave01_p64 TORainbowCave01_p64;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c391c94(void);
extern void call_8c3827d8(void *);
extern int operation_8c03d338(void);
extern void call_8c38c0f0(Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void scale_current_matrix_v_8c37e390(void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c391cc4(void);
void TORainbowCave01_render_8c11f2e4(TORainbowCave01 *o)
{
    Frame frame;
    int t1;
    if (((o->f34 & 0x8000000)) == 0) {
        call_8c391c94();
        call_8c3827d8((void *)(o->f28));
        g_8c46f560 = (int)(g_8c575570);
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 0.0f;
        g_8c575570 |= 0x20;
        (&frame)->f0c = 0.0f;
        t1 = operation_8c03d338();
        if (t1 == 1) {
            (&frame)->f00 = 0.0f;
        } else {
            (&frame)->f00 = o->f104;
        }
        call_8c38c0f0((Frame *)((&frame)));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        scale_current_matrix_v_8c37e390((void *)(((char *)o + 0x10c)));
        call_8c3aa716((void *)(o->f38));
        njPopMatrixEx_8c38ad10();
        call_8c38c0f0((Frame *)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
        call_8c391cc4();
    }
}
