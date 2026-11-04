#include "src/include/classes/TObjMesBase.h"
typedef struct TObjMesBase_pec TObjMesBase_pec;
extern char g_8c324f2c[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjMesBase_v09_8c1ab2c8(TObjMesBase *o)
{
    o->fec = (TObjMesBase_pec *)o->f88;
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c324f2c + 0xc)), (void *)(o->fec));
    njPrintColor_8c38c5b6(-0xf0f10);
}
