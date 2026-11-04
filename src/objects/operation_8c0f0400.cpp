#include "src/include/classes/TOWreckAncient.h"
typedef struct TOWreckAncient_p28 TOWreckAncient_p28;
typedef struct TOWreckAncient_p38 TOWreckAncient_p38;
typedef struct TOWreckAncient_p64 TOWreckAncient_p64;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0f0400(TOWreckAncient *o)
{
    int t1;
    t1 = o->v11(o->fe4, o->fe8);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa716((void *)(o->f38));
        njPopMatrixEx_8c38ad10();
    }
}
