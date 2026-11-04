#include "src/include/classes/TWindowMakeTeam.h"
typedef struct TWindowMakeTeam_p28 TWindowMakeTeam_p28;
typedef struct TWindowMakeTeam_p30 TWindowMakeTeam_p30;
struct TWindowMakeTeam_p28 {
    char f00;
};
extern void call_8c1dc55c(void *, int);
extern void call_8c1dc50c(void *, int);
void operation_8c1e5820(TWindowMakeTeam *o)
{
    if (o->f28 != 0 && o->f28->f00 != 0) {
        call_8c1dc55c(o->f30, 4);
        return;
    }
    call_8c1dc50c(o->f30, 4);
}
