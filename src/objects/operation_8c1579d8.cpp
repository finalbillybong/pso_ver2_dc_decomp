#include "src/include/classes/TObjMapWarpAncient.h"
typedef struct TObjMapWarpAncient_p124 TObjMapWarpAncient_p124;
typedef struct TObjMapWarpAncient_p128 TObjMapWarpAncient_p128;
typedef struct TObjMapWarpAncient_p12c TObjMapWarpAncient_p12c;
typedef struct TObjMapWarpAncient_p130 TObjMapWarpAncient_p130;
typedef struct TObjMapWarpAncient_p134 TObjMapWarpAncient_p134;
typedef struct TObjMapWarpAncient_p138 TObjMapWarpAncient_p138;
typedef struct TObjMapWarpAncient_p13c TObjMapWarpAncient_p13c;
typedef struct TObjMapWarpAncient_p64 TObjMapWarpAncient_p64;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjMapWarpAncient_render_8c1579d8(TObjMapWarpAncient *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c391c94();
        if (o->f8c >= 0) {
            call_8c3827d8((void *)(o->f130));
            call_8c3addea((void *)(o->f124), (void *)(o->f13c), o->f120);
        }
        call_8c3827d8((void *)(o->f134));
        call_8c3aa716((void *)(o->f128));
        call_8c391cc4();
        call_8c3827d8((void *)(o->f138));
        call_8c3aa716((void *)(o->f12c));
        njPopMatrixEx_8c38ad10();
    }
}
