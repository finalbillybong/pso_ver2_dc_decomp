#include "src/include/classes/TItemMagSub.h"
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
extern int g_8c4689e8;
extern void *g_8c4699f8;
extern void *g_8c4699fc;
extern int g_8c46f560;
extern Block16 g_8c46f564;
extern TItemMagSub *g_8c4e3160;
extern int g_8c4e3164;
extern int g_8c575570;
extern Block16 g_8c5755ac;
extern void apply_resource_3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void operation_8c1f246c(void *);
extern void call_8c3af5ee(void *);
extern void call_8c3addea(void *, void *, float);
extern void operation_8c0746c8(int);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c391cc4(void);
void TItemMagSub_render_8c1f2354(TItemMagSub *o)
{
    if (o->f28 != 0) {
        g_8c4e3160 = o;
        apply_resource_3827d8((void *)(o->f30));
        njPushMatrixEx_8c38ae68();
        operation_8c1f246c((void *)o);
        g_8c4e3164 = 0;
        o->f70 = 0;
        if (o->f2c != 0) {
            call_8c3af5ee((void *)((void *)0x8c1f26e8));
            call_8c3addea((void *)(o->f28), (void *)(o->f2c), o->f84);
            call_8c3af5ee((void *)0);
        } else {
            g_8c4699fc = (void *)0x8c1f26e8;
            g_8c4689e8 = 0;
            g_8c4699f8 = (void *)0x8c3aa702;
            operation_8c0746c8((int)(o->f28));
            g_8c4699fc = (void *)0;
        }
        g_8c4e3164 = 0;
        njPopMatrixEx_8c38ad10();
        g_8c4e3160 = (TItemMagSub *)0;
        if (((o->f68 & 0x20)) != 0) {
            call_8c391cc4();
            *(Block16 *)&g_8c5755ac = *(Block16 *)&g_8c46f564;
            g_8c575570 = (int)(g_8c46f560);
            o->f68 &= -0x21;
        }
    }
}
