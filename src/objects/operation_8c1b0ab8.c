#include "src/include/classes/TObjBoss2Dust.h"
extern void call_8c391cc4(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c38efbc(int, int, int);
extern void njPopMatrixEx_8c38ad10(void);
void TObjBoss2Dust_render_8c1b0ab8(TObjBoss2Dust *o)
{
    char *v1;
    v1 = (char *)o->f24;
    call_8c391cc4();
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x28)));
    call_8c38efbc((int)((int)(v1) * 0x60 + 0x8c4e243c), 6, 0);
    njPopMatrixEx_8c38ad10();
}
