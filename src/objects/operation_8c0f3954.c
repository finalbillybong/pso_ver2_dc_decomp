#include "src/include/classes/TObject.h"
typedef struct Arg0_0 Arg0_0;
int operation_8c0f3954(TObject *o, int a1)
{
    char *v1;
    if (o->link_08 < o->link_0c) {
        *(int *)((char *)((char *)o->tag + 0x0) + (o->link_08 << 2)) = a1;
        v1 = (char *)o->link_08;
        o->link_08 += 1;
        return (int)(v1);
    }
    return -1;
}
