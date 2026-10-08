#include "src/include/alternate_render.h"
extern AlternateParameter alternate_parameter;
extern AlternateDispatch alternate_dispatch;
AlternateDispatch *select_alternate_render_dispatch(void *previous,void *parameter) {
 alternate_parameter.parameter=parameter;
 alternate_dispatch.previous=previous;
 return &alternate_dispatch;
}
