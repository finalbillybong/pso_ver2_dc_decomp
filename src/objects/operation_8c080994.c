#include "src/include/classes/TMotorcycle.h"
typedef struct S_g8c469ba0 S_g8c469ba0;
typedef struct TMotorcycle_pf0 TMotorcycle_pf0;
extern char g_8c2fec68[];
extern void TObjMesBase_v09_8c1ab2c8(TMotorcycle *);
extern int call_8c18e8a0(void *, int);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TMotorcycle_v09_8c080994(TMotorcycle *o)
{
    int t1;
    TObjMesBase_v09_8c1ab2c8(o);
    o->ff0 = (TMotorcycle_pf0 *)(int)o->f6c;
    t1 = call_8c18e8a0((void *)(o->ff0), 2);
    o->ff0 = (TMotorcycle_pf0 *)t1;
    o->f38 = (int)(*(int *)((char *)((char *)*(S_g8c469ba0 **)0x8c469ba0 + 0x4) + ((int)(o->ff0) << 2)));
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c2fec68 + 0x2e)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
