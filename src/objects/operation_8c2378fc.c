#include "src/include/classes/TChallenge.h"
typedef struct Block1300 {
    int words[325];
} Block1300;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c237c20(TChallenge *);
extern void operation_8c248614(TChallenge *);
extern void operation_8c238fcc(TChallenge *);
TChallenge *TChallenge_ctor_8c2378fc(TChallenge *o, int a1)
{
    TChallenge **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c279200;
    o->tag = (int)(*(int *)0x8c339788);
    o->size = 0x78;
    *(Block1300 *)&*(Block1300 *)0x8c339ca0 = *(Block1300 *)&*(Block1300 *)0x8c33978c;
    call_8c237c20(o);
    operation_8c248614(o);
    o->f68 = 0;
    o->f6c = 0;
    o->f70 = 1;
    operation_8c238fcc(o);
    o->f74 = 0;
    o->f20 = 0;
    return o;
}
