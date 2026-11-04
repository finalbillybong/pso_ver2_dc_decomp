#include "src/include/classes/TObjHashiBase.h"
typedef struct TObjHashiBase_p88 TObjHashiBase_p88;
extern char g_8c3107f8[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void operation_8c11a1f0(TObjHashiBase *o)
{
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c3107f8 + 0x7d)), (void *)(o->f88));
    njPrintColor_8c38c5b6(-0xf0f10);
}
