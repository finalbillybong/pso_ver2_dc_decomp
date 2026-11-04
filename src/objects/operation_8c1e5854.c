#include "src/include/classes/TWindowMakeTeam.h"
typedef struct TWindowMakeTeam_p30 TWindowMakeTeam_p30;
extern void call_8c1dc55c(void *, int);
extern void call_8c1dc50c(void *, int);
void operation_8c1e5854(TWindowMakeTeam *o)
{
    if (o->f22 != 1) {
        call_8c1dc55c(o->f30, 3);
        return;
    }
    call_8c1dc50c(o->f30, 3);
}
