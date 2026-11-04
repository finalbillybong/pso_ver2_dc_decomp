#include "src/include/classes/TObjBgmCol.h"
typedef struct S_g8c324d68 S_g8c324d68;
typedef struct TObjBgmCol_p88 TObjBgmCol_p88;
extern char g_8c324d84[];
extern int call_8c18e8a0(void *, int);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void call_8c1a9e9c(TObjBgmCol *);
void shop_play_bgm_8c1a9de4(TObjBgmCol *o)
{
    int t1;
    o->f9c = o->f6c;
    t1 = call_8c18e8a0((void *)(o->f88), 5);
    o->fa0 = (int)(t1);
    if (!(o->fa0 >= 0)) {
        o->fa0 = 0;
    }
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c324d84 + 0x3f)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c324d84 + 0x4c)), *(S_g8c324d68 **)((char *)0x8c324d68 + (o->fa0 << 2)));
    njPrintColor_8c38c5b6(-0xf0f10);
    call_8c1a9e9c(o);
}
