#include "src/include/classes/TODragonflyMachine01.h"
typedef struct TODragonfly_p28 TODragonfly_p28;
typedef struct TODragonfly_p38 TODragonfly_p38;
typedef struct TODragonfly_p64 TODragonfly_p64;
typedef struct TODragonfly_pf4 TODragonfly_pf4;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3af5ee(void *);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c1c3fd8();
extern "C" void TODragonflyMachine01_render_8c1c3edc(TODragonflyMachine01 *o)
{
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, 0.0f, o->f128, 0.0f);
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        switch (o->f138) {
        case 3:
        case 4:
            njRotateY_8c37df90(0, (int)((int)o->f64 - (int)o->f13c));
            break;
        default:
            njRotateY_8c37df90(0, (int)(o->f64));
            break;
        }
        call_8c3827d8((void *)(o->f28));
        *(int *)0x8c4e2d04 = 0;
        *(int *)0x8c4e2d08 = (int)(o->f13c);
        call_8c3af5ee(operation_8c1c3fd8);
        call_8c3addea((void *)(o->f38), (void *)(o->ff4), o->fe8);
        call_8c3af5ee((void *)0);
        njPopMatrixEx_8c38ad10();
    }
}
