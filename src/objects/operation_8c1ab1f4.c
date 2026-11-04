#include "src/include/classes/TObjMesBase.h"
typedef struct TObjMesBase_pe4 TObjMesBase_pe4;
extern int hierarchy_is_active(void *);
void TObjMesBase_v16_8c1ab1f4(TObjMesBase *o)
{
    int t1;
    if (o->fe4 != 0) {
        t1 = hierarchy_is_active((void *)(o->fe4));
        if (t1 == 0) {
            o->fe4 = (TObjMesBase_pe4 *)0;
            o->fe8 = 0;
        }
    }
}
