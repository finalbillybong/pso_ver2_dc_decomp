#include "src/include/classes/TODoorAncient05.h"
typedef struct S_g8c4d84a8 S_g8c4d84a8;
typedef struct Arg0_28 Arg0_28;
typedef struct TODoorAncient05_p38 TODoorAncient05_p38;
typedef struct TODoorAncient05_p64 TODoorAncient05_p64;
typedef struct TODoorAncient05_pf4 TODoorAncient05_pf4;
extern "C" int call_8c0eeb00(TODoorAncient05 *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TODoorAncient05_render_8c11efa4(TODoorAncient05 *o)
{
    int t1;
    int t2;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        t2 = call_8c0eeb00(o, 30.0f);
        if (t2 != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3827d8((void *)(o->f28));
            if (o->ff4 != 0 && o->fe8 != 0.0f) {
                call_8c3addea((void *)(o->f38), (void *)(o->ff4), o->fe8);
            } else {
                call_8c3aa716((void *)(*(S_g8c4d84a8 **)0x8c4d84a8));
                call_8c3aa716((void *)(*(int *)0x8c4d84a8 + 0x34));
                call_8c391c94();
                call_8c3aa716((void *)(*(int *)0x8c4d84a8 + 0x68));
                call_8c391cc4();
            }
            njPopMatrixEx_8c38ad10();
        }
    }
}
