#include "src/include/classes/TObjComputer.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c085f60(void *);
extern "C" void TObjComputer_render_8c085f2c(TObjComputer *o)
{
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        operation_8c085f60((void *)o);
    }
}
