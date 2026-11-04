#include "src/include/classes/TObjGyaranzoMissile.h"
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_42c S_g8c4d7bbc_42c;
typedef struct S_g8c4d7bbc_42c_68 S_g8c4d7bbc_42c_68;
typedef struct S_g8c4d7bbc_42c_6c S_g8c4d7bbc_42c_6c;
typedef struct TObjGyaranzoMissile_p104 TObjGyaranzoMissile_p104;
typedef struct TObjGyaranzoMissile_p60 TObjGyaranzoMissile_p60;
typedef struct TObjGyaranzoMissile_p64 TObjGyaranzoMissile_p64;
struct S_g8c4d7bbc {
    char unknown0[0x42c];
    S_g8c4d7bbc_42c *f42c;
};
struct S_g8c4d7bbc_42c {
    char unknown0[0x68];
    S_g8c4d7bbc_42c_68 *f68;
    S_g8c4d7bbc_42c_6c *f6c;
};
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern float njSin_8c37eb0c(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3a944a(void *);
extern void njPopMatrixEx_8c38ad10(void);
void TObjGyaranzoMissile_render_8c1122b0(TObjGyaranzoMissile *o)
{
    float t1;
    call_8c3827d8((void *)((*(S_g8c4d7bbc **)0x8c4d7bbc)->f42c->f6c));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateX_8c37dd28(0, (void *)(o->f60));
    njRotateY_8c37df90(0, (void *)(o->f64));
    t1 = njSin_8c37eb0c((void *)(o->f104));
    njTranslate_8c3829bc(0, 0.0f, o->f10c * t1, 0.0f);
    *(int *)0x8c575570 &= -0x401;
    call_8c3a944a((void *)((*(S_g8c4d7bbc **)0x8c4d7bbc)->f42c->f68));
    njPopMatrixEx_8c38ad10();
}
