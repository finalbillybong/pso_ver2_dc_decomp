#include "src/include/classes/TObjVoloptCage.h"
typedef struct S_g8c4dab0c S_g8c4dab0c;
typedef struct S_g8c4dab10 S_g8c4dab10;
typedef struct TObjEnemyCustom_p64 TObjEnemyCustom_p64;
extern S_g8c4dab0c *g_8c4dab0c;
extern S_g8c4dab10 *g_8c4dab10;
extern int g_8c575570;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjVoloptCage_render_8c159dd4(TObjVoloptCage *o)
{
    int t1;
    t1 = o->v11(400.0f, 40.0f);
    if (t1 != 0) {
        call_8c3827d8(g_8c4dab10);
        njPushMatrixEx_8c38ae68();
        g_8c575570 &= -0x401;
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3aa716(g_8c4dab0c);
        njPopMatrixEx_8c38ad10();
    }
}
