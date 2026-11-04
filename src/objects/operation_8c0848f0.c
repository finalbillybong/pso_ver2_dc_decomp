#include "src/include/classes/TObjContainerEnemy.h"
typedef struct S_g8c469c84 S_g8c469c84;
typedef struct TObjContainerBase_p38 TObjContainerBase_p38;
typedef struct TObjContainerBase_p64 TObjContainerBase_p64;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
void TObjContainerEnemy_v88_8c0848f0(TObjContainerEnemy *o)
{
    if (*(int *)0x8c469c80 != 0) {
        if (o->f30a != 0) {
            if (o->f30a == 1) {
                return;
            }
            return;
        }
        call_8c3827d8((void *)(*(S_g8c469c84 **)0x8c469c84));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        njScale_8c37e2e4(0, 0.85f, 0.85f, 0.85f);
        call_8c3aa716((void *)(o->f38));
        njPopMatrixEx_8c38ad10();
    }
}
