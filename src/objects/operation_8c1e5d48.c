#include "src/include/classes/TObject.h"
void operation_8c1e5d48(TObject *o)
{
    if (o->child > 0) {
        o->child -= 1;
        if (!(o->child > 0)) {
            o->parent = -1;
        }
    }
}
