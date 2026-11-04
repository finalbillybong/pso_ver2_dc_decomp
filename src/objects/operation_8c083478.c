#include "src/include/classes/TObjContainerIdo.h"
typedef struct TObjContainerIdo_p104 TObjContainerIdo_p104;
typedef struct TObjContainerIdo_p114 TObjContainerIdo_p114;
extern char g_8c2ff478[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjContainerIdo_v09_8c083478(TObjContainerIdo *o)
{
    int v7;
    int v10;
    int v5;
    o->f114 = (TObjContainerIdo_p114 *)o->f8c;
    if (1 > (int)(o->f114)) {
        o->f114 = (TObjContainerIdo_p114 *)1;
    }
    if ((int)(o->f114) > 4) {
        o->f114 = (TObjContainerIdo_p114 *)4;
    }
    v5 = (int)0x114;
    v10 = (int)0;
    goto L_8c0834b8;
    v7 = (int)0;
L_8c0834aa:;
    *(int *)((char *)&o->f104 + (v7 << 2)) = (int)*(int *)((char *)((char *)o + 0x0) + 0x88) + v7;
    v10 = (int)(v7 + 1);
L_8c0834b8:;
    v7 = (int)v10;
    if (*(int *)((char *)((char *)o + 0x0) + (v5)) > v10) {
        goto L_8c0834aa;
    }
    *(Vector3 *)&o->ff8 = *(Vector3 *)&o->f3c;
    o->f124 = o->f70;
    if (o->f90 != 0) {
        o->f118 |= 0x8000000;
    } else {
        o->f118 &= -0x8000001;
    }
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c2ff478 + 0x37)));
    debug_print_at_8c38cf80(0x13001b, (void *)((g_8c2ff478 + 0x44)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c2ff478 + 0x52)), o->f104);
    debug_print_at_8c38cf80(0x13001f, (void *)((g_8c2ff478 + 0x65)), o->f114);
    if (o->f90 != 0) {
        debug_print_at_8c38cf80(0x130020, (void *)((g_8c2ff478 + 0x78)));
    } else {
        debug_print_at_8c38cf80(0x130020, (void *)((g_8c2ff478 + 0x8a)));
    }
    njPrintColor_8c38c5b6(-0xf0f10);
}
