#include "src/include/classes/TObjCity_Season_Board.h"
typedef struct S_g8c4e2f14 S_g8c4e2f14;
typedef struct S_g8c4e2f18 S_g8c4e2f18;
typedef struct S_g8c4e2f1c S_g8c4e2f1c;
typedef struct S_g8c4e2f20 S_g8c4e2f20;
typedef struct TObjCity_Season_Board_p64 TObjCity_Season_Board_p64;
typedef struct Arg0_94 Arg0_94;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c0cd63c(void *, void *, int);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCity_Season_Board_render_8c1d93a4(TObjCity_Season_Board *o)
{
    int t1;
    if (*(int *)0x8c4e2f10 != 0) {
        t1 = o->v11(800.0f, 100.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(*(S_g8c4e2f1c **)0x8c4e2f1c));
            call_8c0cd63c((void *)(*(S_g8c4e2f20 **)0x8c4e2f20), (void *)(o->f94), 0);
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3a944a((void *)(*(S_g8c4e2f14 **)0x8c4e2f14));
            call_8c3aa716((void *)(*(S_g8c4e2f18 **)0x8c4e2f18));
            njPopMatrixEx_8c38ad10();
        }
    }
}
