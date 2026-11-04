#include "src/include/classes/TBoss1DragonEffBullet.h"
typedef struct S_g8c469ac0 S_g8c469ac0;
typedef struct S_g8c469ac0_0 S_g8c469ac0_0;
typedef struct S_g8c469ac0_4 S_g8c469ac0_4;
typedef struct S_g8c469ac0_8 S_g8c469ac0_8;
typedef struct TBoss1DragonEffBullet_p48 TBoss1DragonEffBullet_p48;
typedef struct S_vv13 S_vv13;
struct S_g8c469ac0 {
    S_g8c469ac0_0 *f00;
    S_g8c469ac0_4 *f04;
    S_g8c469ac0_8 *f08;
};
struct S_vv13 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c469ac0 *g_8c469ac0;
extern int create_effect_7708(void *, int, int);
extern void call_8c0a7608(void *, void *);
extern void create_effect(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern int operation_8c065330(void);
extern void operation_8c067ca0(void *, int);
void TBoss1DragonEffBullet_update_8c07bed4(TBoss1DragonEffBullet *o)
{
    float v1;
    float v2;
    float v6;
    S_vv13 *v13;
    int t1;
    int t2;
    switch (o->f3c) {
    case 0:
        v6 = 25.0f;
        {
            float *p = &o->f40;
            *p += v6;
            v1 = *p;
        }
        v2 = (float)o->f44;
        if (v1 > v2) {
            o->f38 = 0;
            o->f3c = 1;
            v6 = (float)(v2 - (v1 - v6));
        }
        o->f20.x = o->f2c.x * v6 + o->f20.x;
        o->f20.y = o->f2c.y * v6 + o->f20.y;
        o->f20.z = o->f2c.z * v6 + o->f20.z;
        if (o->f48 == 0) {
            t1 = create_effect_7708((void *)(&o->f20.x), (int)(g_8c469ac0->f00), 0x40);
            o->f48 = (TBoss1DragonEffBullet_p48 *)t1;
        }
        if (o->f48 == 0) {
            return;
        }
        call_8c0a7608((void *)(o->f48), (void *)(&o->f20.x));
        return;
    case 1:
        o->f38 += 1;
        if (o->f38 == 1) {
            create_effect((void *)(&o->f20.x), (int)(g_8c469ac0->f04), 0x40);
            if (o->f48 != 0) {
                v13 = (S_vv13 *)o->f48;
                v13->f04 |= 1;
                o->f48 = (TBoss1DragonEffBullet_p48 *)0;
            }
            play_se_8c05fbf8(0x3000c, (void *)(&o->f20.x), 0, 0);
            t2 = operation_8c065330();
            operation_8c067ca0((void *)t2, (int)(&o->f20.x));
        }
        if (2 >= o->f38) {
            create_effect((void *)(&o->f20.x), (int)(g_8c469ac0->f08), 0x40);
            return;
        }
        o->f3c = 2;
        return;
    case 2:
        o->f38 += 1;
        if (o->f38 > 0x64) {
            o->f04 |= 1;
        }
    }
}
