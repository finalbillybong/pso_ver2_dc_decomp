#include "src/include/classes/TOContainerAncientEnemy.h"
typedef struct TObjContainerBase_p88 TObjContainerBase_p88;
extern char g_8c32b804[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void operation_8c0c5478(void *, void *, float);
void operation_8c1e4af4(TOContainerAncientEnemy *o)
{
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c32b804 + 0x2ef)), (void *)(o->f88));
    njPrintColor_8c38c5b6(-0xf0f10);
    operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c306018), 40.0f);
}
