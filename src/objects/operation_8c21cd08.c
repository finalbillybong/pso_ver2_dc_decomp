#include "src/include/classes/TWindowShortCut.h"
typedef struct TWindowShortCut_p68 TWindowShortCut_p68;
extern void call_8c199b74(void *);
extern void call_8c0db30c(TWindowShortCut *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void TWindowShortCut_update_8c21cd08(TWindowShortCut *o)
{
    call_8c199b74((void *)(o->f68));
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
