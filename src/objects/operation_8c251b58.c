#include "src/include/classes/TItemShootRocketPunchON.h"
typedef struct TItemShoot_p30 TItemShoot_p30;
typedef struct Arg0_5c Arg0_5c;
typedef struct Arg0_60 Arg0_60;
extern void njPushMatrixEx_8c38ae68(void);
extern void apply_resource_3827d8(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, int);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
void TItemShootRocketPunchON_render_8c251b58(TItemShootRocketPunchON *o)
{
    if (o->f5c != 0 && o->f60 != 0) {
        njPushMatrixEx_8c38ae68();
        apply_resource_3827d8((void *)(o->f60));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
        njRotateY_8c37df90(0, (void *)(o->f30));
        njRotateX_8c37dd28(0, (int)((int)o->f2c + -0x4000));
        call_8c3aa716((void *)(o->f5c));
        njPopMatrixEx_8c38ad10();
    }
}
