#include "src/include/classes/TBoss3VoloptP01.h"
typedef struct S_g8c4d9c40 S_g8c4d9c40;
typedef struct TObjEnemyCustom_p28 TObjEnemyCustom_p28;
typedef struct TObjEnemyCustom_p38 TObjEnemyCustom_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct TBoss3VoloptP01_p3d0 TBoss3VoloptP01_p3d0;
typedef struct TObjEnemyCustom_p64 TObjEnemyCustom_p64;
struct TObjEnemyCustom_p38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
};
struct S_g8c4d9c40 {
    char unknown0[0x4];
    unsigned char f04;
    unsigned char f05;
    char f06;
};
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(TBoss3VoloptP01 *);
extern "C" void call_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" int operation_8c03d338(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa716(TObjEnemyCustom_p38 *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void call_8c3a9436(void *);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float call_8c12c714(float);
extern "C" void operation_8c01cc90(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c391cc4(void);
extern "C" void TBoss3VoloptP01_render_8c13c698(TBoss3VoloptP01 *o)
{
    int t1;
    int t2;
    float t3;
    float t4;
    if (((o->f34 & 0x2000000)) == 0) {
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(o->f28));
            call_8c013c58(o);
            call_8c1086fc();
            njPushMatrixEx_8c38ae68();
            t2 = operation_8c03d338();
            if (t2 == 1) {
                translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                njRotateY_8c37df90(0, (void *)(o->f64));
                call_8c3aa716((TObjEnemyCustom_p38 *)(o->f38));
            } else {
                njTranslate_8c3829bc(0, o->f3c, o->f40 + o->f3a8, o->f44);
                njRotateY_8c37df90(0, (void *)(o->f64));
                if (((o->f3a4 & 0x40000)) != 0) {
                    call_8c3a9436((void *)(o->f38->f2c->f04));
                } else {
                    if (((o->f3a4 & 0x80000)) != 0) {
                        t3 = njSin_8c37eb0c((void *)(o->f3d0));
                        t4 = call_8c12c714(t3);
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f06 = (int)(t4 * 255.0f);
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f05 = 0;
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f04 = 0;
                    } else {
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f06 = 0;
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f05 = 0xcc;
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f04 = 0xff;
                    }
                    operation_8c01cc90((void *)o);
                }
            }
            njPopMatrixEx_8c38ad10();
            operation_8c013e74();
            call_8c391cc4();
        }
    }
}
