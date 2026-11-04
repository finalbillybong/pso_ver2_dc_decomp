#include "src/include/classes/TDLGraph.h"
void TDLGraph_update_8c25df4c(TDLGraph *o)
{
    char *v11;
    int v1;
    int v3;
    o->f20 += 1;
    v11 = (char *)o->f28;
    if ((int)(v11) > 0) {
        v1 = (int)(v11 + -1);
        o->f28 = (int)(v1);
        if (30.0f > (float)v1) {
            o->f28 = 0x1e;
        }
        v3 = (int)((int)o->f30 + 1);
        o->f30 = (int)(v3);
        if (!(30.0f > (float)v3)) {
            o->f2c = (int)(o->f28);
            o->f30 = 0;
        }
    }
    if (((int)o->f20 - (int)o->f34) >= 0x1c2) {
        o->f04 |= 1;
    }
}
