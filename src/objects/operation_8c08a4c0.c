#include "src/include/classes/TObjPlayerSet.h"
typedef struct TObjPlayerSet_p88 TObjPlayerSet_p88;
extern char g_8c30019c[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjPlayerSet_v09_8c08a4c0(TObjPlayerSet *o)
{
    if (0.0f > o->f6c) {
        o->f6c = 0.0f;
    }
    if (!((int)(o->f88) >= 0)) {
        o->f88 = (TObjPlayerSet_p88 *)0;
    }
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c30019c + 0xe)), (int)((int)o->f6c));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c30019c + 0x21)), (int)(o->f88));
    njPrintColor_8c38c5b6(-0xf0f10);
}
