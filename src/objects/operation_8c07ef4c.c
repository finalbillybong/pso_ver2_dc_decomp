#include "src/include/classes/TItemMag.h"
extern int call_8c18e768(int, int);
int operation_8c07ef4c(TItemMag *o)
{
    int v12;
    int v1;
    int v8;
    int v9;
    int v11;
    int v13;
    int v14;
    int t1;
    int t2;
    int t3;
    v1 = (int)0;
    t1 = call_8c18e768((int)(o->f1ea), 0x64);
    t2 = call_8c18e768((int)(o->f1ec), 0x64);
    t3 = call_8c18e768((int)(o->f1ee), 0x64);
    if ((short)t2 < (short)t1 && (short)t1 > (short)t3) {
        v1 = (int)(v1 | 8);
    }
    if ((short)t1 < (short)t2 && (short)t2 > (short)t3) {
        v1 = (int)(v1 | 0x10);
    }
    if ((short)t2 < (short)t3 && (short)t3 > (short)t1) {
        v1 = (int)(v1 | 0x20);
    }
    v12 = 0;
    v11 = (((short)t1 > (short)t2 ? (short)t1 : (short)t2) > (short)t3) ? ((short)t1 > (short)t2 ? (short)t1 : (short)t2) : (short)t3;
    if ((short)t1 == v11) {
        v12++;
    }
    if ((short)t2 == v11) {
        v12++;
    }
    if ((short)t3 == v11) {
        v12++;
    }
    if (v12 >= 2) {
        v1 = (int)(v1 | 0x100);
    }
    return (int)(v1);
}
