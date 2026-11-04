#include "src/include/classes/TBoss2PhotonPad.h"
typedef struct S_L8c286528 S_L8c286528;
typedef struct S_g8c286528 S_g8c286528;
typedef struct S_g8c286530 S_g8c286530;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObject_p10 TObject_p10;
typedef struct TBoss2PhotonPad_p20 TBoss2PhotonPad_p20;
struct S_L8c286528 {
    char unknown0[0x4];
    int f04;
    S_g8c286530 *f08;
    float f0c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c286528 g_8c286528;
extern int operation_8c143048(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TBoss2PhotonBullet_ctor_8c167284(int, void *, int, void *, float, void *);
extern int call_8c18e768(void *, void *);
extern void rotate_scalar_pair(void *, void *, int);
void TBoss2PhotonPad_update_8c1671b8(TBoss2PhotonPad *o)
{
    int t1;
    int t2;
    int t3;
    o->f38 -= 1;
    if (!(o->f38 > 0)) {
        t1 = operation_8c143048();
        if (t1 != 0) {
            t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x120);
            if (t2 != 0) {
                TBoss2PhotonBullet_ctor_8c167284(t2, (void *)(o->f10), t1, (void *)(o->f20), *(float *)((char *)&g_8c286528.f0c + (o->f30 << 4)) * 1.5f, (void *)(((char *)o + 0x24)));
            }
        }
        o->f38 = (int)(*(int *)((char *)&g_8c286528.f04 + (o->f30 << 4)));
        t3 = call_8c18e768((void *)(*(S_g8c286530 **)((char *)&g_8c286528.f08 + (o->f30 << 4))), (void *)(*(S_g8c286528 **)((char *)&g_8c286528 + (o->f30 << 4))));
        rotate_scalar_pair((void *)(((char *)o + 0x24)), (void *)(((char *)o + 0x2c)), t3);
        o->f34 -= 1;
        if (o->f34 == 0) {
            o->f04 |= 1;
        }
    }
}
