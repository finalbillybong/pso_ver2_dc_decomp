#include "src/include/classes/TLazerFenceSw.h"
typedef struct TOKey_p90 TOKey_p90;
extern char g_8c30ff94[];
extern void show_key_8c112fbc(void *);
extern int call_8c18e8a0(void *, int);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TLazerFenceSw_v09_8c113bb0(TLazerFenceSw *o)
{
    int t1;
    show_key_8c112fbc((void *)o);
    if (!((int)(o->f90) >= 0)) {
        o->f90 = (TOKey_p90 *)0;
    }
    t1 = call_8c18e8a0((void *)(o->f90), 4);
    o->f11c = *(volatile unsigned short *)((char *)0x8c285d88 + (t1 << 1)) & 0xffff;
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x130020, (void *)((g_8c30ff94 + 0xd2)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
