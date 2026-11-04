#include "src/include/classes/TWindowMainMenuCommand.h"
typedef struct TWindowMainMenuCommand_p6c TWindowMainMenuCommand_p6c;
extern void accumulate_8c199f14(void *);
extern void call_8c0db30c(TWindowMainMenuCommand *);
extern void interpolate_view_parameters(void *);
void TWindowMainMenuCommand_update_8c18cc6c(TWindowMainMenuCommand *o)
{
    if (!(7.5f > (float)o->f64)) {
        accumulate_8c199f14((void *)(o->f6c));
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
}
