#include "src/include/classes/TItemShootFast.h"
typedef struct TItemShoot_p30 TItemShoot_p30;
typedef struct TItemShootModel_p5c TItemShootModel_p5c;
typedef struct TItemShootModel_p60 TItemShootModel_p60;
typedef struct Arg0_64 Arg0_64;
extern void njPushMatrixEx_8c38ae68(void);
extern void apply_resource_3827d8(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, int);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
void TItemShootFast_render_8c23cb04(TItemShootFast *o)
{
    if (o->f5c != 0 && o->f60 != 0) {
        njPushMatrixEx_8c38ae68();
        apply_resource_3827d8((void *)(o->f60));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
        njRotateY_8c37df90(0, (void *)(o->f30));
        njRotateX_8c37dd28(0, -0x4000);
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3aa716((void *)(o->f5c));
        njPopMatrixEx_8c38ad10();
    }
}
