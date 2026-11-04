#include "src/include/classes/TOMine.h"
extern "C" void operation_8c05426c(void *, int, int);
extern "C" void update_object_center(void *);
extern "C" void transform_actor_records(void *);
extern "C" void operation_8c0fd5f8(TOMine *o)
{
    o->f30a = 2;
    operation_8c05426c((void *)o, 0, 1);
    o->f34 &= -0x40001;
    update_object_center((void *)o);
    transform_actor_records((void *)o);
    o->v93();
}
