#include "src/include/classes/TOVS2.h"
typedef struct TOVS2_p28 TOVS2_p28;
typedef struct TOVS2_p38 TOVS2_p38;
typedef struct TOVS2_p64 TOVS2_p64;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c24c01c(TOVS2 *o)
{
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    o->f104 = (int)t1;
    if (o->f104 == 1) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa716((void *)(o->f38));
        njPopMatrixEx_8c38ad10();
    }
}
