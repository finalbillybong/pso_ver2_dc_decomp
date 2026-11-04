#include "src/include/classes/TObjWarpBoss.h"
typedef struct S_g8c4e3144 S_g8c4e3144;
typedef struct S_g8c4e3158 S_g8c4e3158;
typedef struct S_g8c4e315c S_g8c4e315c;
typedef struct Arg0_100 Arg0_100;
typedef struct TObjWarpBoss_p104 TObjWarpBoss_p104;
typedef struct TObjWarpBoss_p64 TObjWarpBoss_p64;
extern "C" float distance_xz(void *, void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjWarpBoss_render_8c1e7c80(TObjWarpBoss *o)
{
    float t1;
    int t2;
    if (o->ff0 == 0xe) {
        t1 = distance_xz((void *)(*(int *)0x8c46ee80 + 0x90), (void *)(((char *)o + 0x3c)));
        if (!(t1 > 160000.0f)) {
            goto L_8c1e7cbe;
        }
        return;
    }
    t2 = o->v11(400.0f, 40.0f);
    if (t2 != 0) {
L_8c1e7cbe:;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(*(S_g8c4e3158 **)0x8c4e3158));
        call_8c3a944a((void *)(*(S_g8c4e3144 **)0x8c4e3144));
        if (o->f100 != 0) {
            call_8c391c94();
            call_8c3827d8((void *)(*(S_g8c4e315c **)0x8c4e315c));
            call_8c3ac53a((void *)(o->f100), (void *)(o->f104), o->ff4);
            call_8c391cc4();
        }
        njPopMatrixEx_8c38ad10();
    }
}
