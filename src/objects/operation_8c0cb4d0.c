#include "src/include/classes/TObjEneMe1Canadin_EffLine.h"
typedef struct TObjEneMe1Canadin_EffLine_p24 TObjEneMe1Canadin_EffLine_p24;
typedef struct TObjEneMe1Canadin_EffLine_p28 TObjEneMe1Canadin_EffLine_p28;
struct TObjEneMe1Canadin_EffLine_p24 {
    Vector3 f00;
};
struct TObjEneMe1Canadin_EffLine_p28 {
    Vector3 f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c12b944(int);
TObjEneMe1Canadin_EffLine *TObjEneMe1Canadin_EffLine_ctor_8c0cb4d0(TObjEneMe1Canadin_EffLine *o, int a1, int a2, int a3)
{
    TObjEneMe1Canadin_EffLine **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266cb0;
    o->tag = (int)(*(int *)0x8c3068e8);
    o->size = 0x4c;
    o->f24 = (TObjEneMe1Canadin_EffLine_p24 *)a2;
    o->f28 = (TObjEneMe1Canadin_EffLine_p28 *)a3;
    o->f2c = o->f24->f00;
    o->f38 = o->f28->f00;
    o->f44 = -0xffcd;
    o->f48 = -0xffcd;
    t1 = call_8c12b944(-0xffcd);
    o->f20 = (int)((float)t1 / 32768.0f * 5.0f);
    return o;
}
