#include "src/include/classes/TContainerAncient01.h"
typedef struct TContainerAncient01_p28 TContainerAncient01_p28;
typedef struct Arg0_38 Arg0_38;
typedef struct TContainerAncient01_p64 TContainerAncient01_p64;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njScaleV_8c37e3d0(int, void *);
extern int operation_8c03d338(void);
extern void call_8c3a944a(void *);
extern void call_8c01cd20(TContainerAncient01 *);
extern void njPopMatrixEx_8c38ad10(void);
void TContainerAncient01_render_8c129328(TContainerAncient01 *o)
{
    int t1;
    if (((o->f34 & 0x8000000)) == 0) {
        call_8c3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        if (o->f378 != 0) {
            njScaleV_8c37e3d0(0, (void *)(((char *)o + 0x37c)));
        }
        t1 = operation_8c03d338();
        if (t1 == 1) {
            call_8c3a944a((void *)(o->f38));
        } else {
            call_8c01cd20(o);
        }
        njPopMatrixEx_8c38ad10();
    }
}
