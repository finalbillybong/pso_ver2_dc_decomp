#include "src/include/classes/TObjLoadGmPlNjReq.h"
typedef struct Arg2 Arg2;
typedef struct Arg2_0 Arg2_0;
struct Arg2 {
    Arg2_0 *f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void strncpy_8c12b154(void *, void *, int);
TObjLoadGmPlNjReq *TObjLoadGmPlNjReq_ctor_8c13f504(TObjLoadGmPlNjReq *o, int a1, Arg2 *a2)
{
    TObjLoadGmPlNjReq **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c26dc24;
    o->tag = *(int *)0x8c314688;
    o->size = 0x7c;
    o->f28 = a2->f08;
    o->f2c = a2->f10;
    o->f20 = a2->f04;
    o->f24 = a2->f0c;
    strncpy_8c12b154((void *)(((char *)o + 0x34)), (void *)(a2->f00), 0x30);
    o->f64 = (int)(((char *)o + 0x34));
    o->f68 = 0;
    o->f6c = 0;
    o->f70 = 0;
    o->f74 = 0x14fa;
    o->f30 = 0;
    return o;
}
