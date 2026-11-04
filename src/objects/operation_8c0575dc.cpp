#include "src/include/classes/TObjEneBm3Fly.h"
typedef struct TObjEneBm3Fly_p28 TObjEneBm3Fly_p28;
typedef struct TObjEneBm3Fly_p38 TObjEneBm3Fly_p38;
typedef struct TObjEneBm3Fly_p64 TObjEneBm3Fly_p64;
extern "C" void call_8c05ba9c(TObjEneBm3Fly *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void operation_8c05baa8(void);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjEneBm3Fly_v111_8c0575dc(TObjEneBm3Fly *o)
{
    int t1;
    t1 = o->v11(400.0f, 15.0f);
    if (t1 != 0) {
        call_8c05ba9c(o, 0);
        call_8c3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        operation_8c05baa8();
        call_8c1086fc();
        call_8c3aa716((void *)(o->f38));
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
