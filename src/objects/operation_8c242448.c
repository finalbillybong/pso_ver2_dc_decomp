#include "src/include/classes/TPlayerBattleCtrl.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int lookup_low_id(int);
extern void call_8c028264(int, void *);
extern void clear_global_render_resources(void);
TPlayerBattleCtrl *TPlayerBattleCtrl_ctor_8c242448(TPlayerBattleCtrl *o, int a1)
{
    TPlayerBattleCtrl **home = &o;
    int v1;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c27ccdc;
    o->tag = *(int *)0x8c33aad4;
    o->size = 0x274;
    o->f2c = 0;
    o->f28 = 0;
    o->f24 = 0;
    o->f20 = 0;
    o->f4c = 0;
    o->f50 = 0;
    o->f54 = 0;
    if (*(int *)0x8c467188 == 0) {
        v1 = (int)(void *)0x8c33aa9c;
    } else {
        v1 = (int)(void *)0x8c33aab8;
    }
    o->f40 = v1;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        call_8c028264(t1, *(S_g8c4db9e0 **)0x8c4db9e0);
    }
    clear_global_render_resources();
    o->f64 = 0;
    return o;
}
