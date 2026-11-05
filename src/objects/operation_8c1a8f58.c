#include "src/include/classes/TWindowSubTechnique.h"
typedef struct TWindowSubTechnique_p24 TWindowSubTechnique_p24;
extern int operation_8c1571f4(void *);
int TWindowSubTechnique_update_step_8c1a8f58(TWindowSubTechnique *o)
{
    int t1;
    int t2;
    if (o->f24 == 0) {
        return 0;
    }
    t1 = operation_8c1571f4(o->f24);
    if (o->f30 == t1) {
        return 0;
    }
    t2 = operation_8c1571f4(o->f24);
    o->f30 = t2;
    return 1;
}
