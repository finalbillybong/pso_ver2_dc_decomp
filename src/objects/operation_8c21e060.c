#include "src/include/types/ViewParameters.h"
void operation_8c21e060(ViewParameters *o)
{
    o->current0 = (o->target0 - o->current0) * 0.21f + o->current0;
    o->current1 = (o->target1 - o->current1) * 0.21f + o->current1;
}
