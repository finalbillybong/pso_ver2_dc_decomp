#include "src/include/classes/TBoss3VoloptMonitor.h"
typedef struct S_L8c3159fc S_L8c3159fc;
typedef struct S_g8c4d9b70 S_g8c4d9b70;
typedef struct S_g8c4da6d0 S_g8c4da6d0;
typedef struct S_g8c4da6d0_42c S_g8c4da6d0_42c;
typedef struct S_g8c4da6d4 S_g8c4da6d4;
typedef struct TObjEnemyCustom_p38 TObjEnemyCustom_p38;
typedef struct TObjEnemyCustom_p64 TObjEnemyCustom_p64;
struct S_g8c4da6d0 {
    char unknown0[0x42c];
    S_g8c4da6d0_42c *f42c;
};
struct S_L8c3159fc {
    char unknown0[0x10];
    int f10;
    char unknown14[0xc];
    int f20;
};
struct S_g8c4da6d4 {
    int f00;
};
extern int g_8c315a2c;
extern S_g8c4d9b70 *g_8c4d9b70;
extern S_g8c4da6d0 *g_8c4da6d0;
extern S_g8c4da6d4 *g_8c4da6d4;
extern int g_8c575570;
extern S_L8c3159fc g_8c3159fc;
extern "C" int call_8c18e768(void *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TBoss3VoloptMonitor_render_8c1516d8(TBoss3VoloptMonitor *o)
{
    int v1;
    int v23;
    int v25;
    int v29;
    int t1;
    int t2;
    int t3;
    if (((o->f34 & 0x2000000)) == 0) {
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            if (((o->f34 & 0x800)) != 0) {
                o->f38 = (TObjEnemyCustom_p38 *)*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)&g_8c3159fc.f20 + (o->f384 << 2)) << 4));
                v29 = (int)0x18;
                v1 = (int)/* ? r12 */ 0;
            } else {
                v1 = (int)0;
                if ((int)(g_8c4d9b70) >= 0) {
                    t2 = call_8c18e768(g_8c4d9b70, 4);
                    t3 = call_8c18e768((void *)(o->f3a8), 4);
                    if (t2 == t3) {
                        v1 = (int)1;
                    }
                }
                if (v1 != 0) {
                    o->f38 = (TObjEnemyCustom_p38 *)*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)&g_8c3159fc.f10 + (o->f384 << 2)) << 4));
                    v25 = (int)(o->f3aa + 0x10);
                } else {
                    o->f38 = (TObjEnemyCustom_p38 *)*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)&g_8c3159fc + (o->f384 << 2)) << 4));
                    v23 = (int)o->f3aa;
                    if (((o->f3a4 & 0x10000)) != 0) {
                        v23 = (int)(o->f3aa + 8);
                    }
                    v25 = (int)v23;
                }
                v29 = (int)v25;
            }
            g_8c315a2c = g_8c4da6d4->f00 + v29 * 0xc;
            call_8c3827d8((void *)((void *)&g_8c315a2c));
            njPushMatrixEx_8c38ae68();
            g_8c575570 &= -0x401;
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3a944a((void *)(o->f38));
            njPopMatrixEx_8c38ad10();
        }
    }
}
