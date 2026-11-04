#include "src/include/classes/TItemShootBasyoSen2.h"
typedef struct TItemShoot_p2c TItemShoot_p2c;
typedef struct TItemShoot_p30 TItemShoot_p30;
typedef struct Arg0_34 Arg0_34;
typedef struct TItemShootModel_p5c TItemShootModel_p5c;
typedef struct TItemShootModel_p60 TItemShootModel_p60;
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c391c94(void);
extern void apply_resource_3827d8(void *);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c37e0c8(int, void *, void *, void *);
extern void call_8c3aa716(void *);
extern void call_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void TItemShootBasyoSen2_render_8c248ed4(TItemShootBasyoSen2 *o)
{
    if (o->f5c != 0 && o->f60 != 0) {
        njPushMatrixEx_8c38ae68();
        call_8c391c94();
        apply_resource_3827d8((void *)(o->f60));
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x20)));
        call_8c37e0c8(0, (void *)(o->f2c), (void *)(o->f30), (void *)(o->f34));
        call_8c3aa716((void *)(o->f5c));
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
