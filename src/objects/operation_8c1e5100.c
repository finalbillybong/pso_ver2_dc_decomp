#include "src/include/classes/TWindowMakeTeam.h"
typedef struct TWindowMakeTeam_p30 TWindowMakeTeam_p30;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c1e5650(TWindowMakeTeam *);
extern int call_8c1e5918(char);
extern void call_8c1dc4b8(void *, int, int);
extern int call_8c1e5928(char);
TWindowMakeTeam *TWindowMakeTeam_ctor_8c1e5100(TWindowMakeTeam *o, int a1, int a2)
{
    TWindowMakeTeam **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c277ea4;
    o->tag = *(int *)0x8c32bb00;
    o->size = 0x3c;
    o->f20 = 0;
    o->f21 = 0;
    o->f24 = a2;
    t1 = call_8c1e5650(o);
    o->f30 = (TWindowMakeTeam_p30 *)t1;
    o->f34 = 0;
    o->f38 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f22 = 0;
    o->f23 = 0;
    if (o->f24 == 1) {
        t2 = call_8c1e5918(o->f22);
        call_8c1dc4b8(o->f30, t2, 2);
    }
    t3 = call_8c1e5928(o->f23);
    call_8c1dc4b8(o->f30, t3, 3);
    return o;
}
