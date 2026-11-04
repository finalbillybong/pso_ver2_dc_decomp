#include "src/include/classes/TContainerAncient01.h"
extern void create_effect_777c(int, int);
void operation_8c129a08(TContainerAncient01 *o, int a1, int a2)
{
    if (((o->f34 & 0x8000000)) == 0) {
        create_effect_777c(a1, a2);
    }
}
