#include "src/include/classes/TObjVoloptShutter.h"
typedef struct S_g8c4dab60 S_g8c4dab60;
typedef struct S_g8c4dab64 S_g8c4dab64;
typedef struct S_g8c4dab68 S_g8c4dab68;
typedef struct Arg0_34 Arg0_34;
extern void call_8c1086fc(void);
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njRotateY_8c37df90(int, void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3a9436(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c391cc4(void);
void TObjVoloptShutter_render_8c15b07c(TObjVoloptShutter *o)
{
    call_8c1086fc();
    call_8c3827d8((void *)(*(S_g8c4dab68 **)0x8c4dab68));
    njPushMatrixEx_8c38ae68();
    *(int *)0x8c575570 &= -0x401;
    njRotateY_8c37df90(0, (void *)(o->f34));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, 0.0f, 0.0f, o->f30);
    call_8c3a9436((void *)(*(S_g8c4dab64 **)0x8c4dab64));
    njTranslate_8c3829bc(0, 0.0f, o->f2c, 0.0f);
    call_8c3a9436((void *)(*(S_g8c4dab60 **)0x8c4dab60));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    call_8c391cc4();
}
