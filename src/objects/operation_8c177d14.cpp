#include "src/include/classes/TObjNpcMoja.h"
typedef struct TObjNpcMoja_p28 TObjNpcMoja_p28;
typedef struct TObjNpcMoja_p64 TObjNpcMoja_p64;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrix_8c38ade4(int);
extern "C" void njTranslateV_8c382a58(int, void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c01cc90(TObjNpcMoja *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c04a9e0(TObjNpcMoja *, int);
extern "C" void TObjNpcMoja_render_8c177d14(TObjNpcMoja *o)
{
    int t1;
    t1 = o->v11(o->f3b4, o->f3b8);
    if (t1 != 0 && o->f3ac == 1) {
        call_8c3827d8((void *)(o->f28));
        njPushMatrix_8c38ade4(0);
        njTranslateV_8c382a58(0, (void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c01cc90(o);
        njPopMatrixEx_8c38ad10();
        call_8c04a9e0(o, 0);
    }
}
