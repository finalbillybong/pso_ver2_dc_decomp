#include "src/include/types/ViewParameters.h"
extern void operation_8c1cd89c(void *);
void operation_8c1d0294(ViewParameters *o)
{
    short v1;
    v1 = (short)o->f84;
    if (o->f98 != (short)v1) {
        o->f98 = v1;
        operation_8c1cd89c((void *)o);
    }
}
