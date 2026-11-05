#include "src/include/classes/TObjPlayer.h"
extern void operation_8c02c998(void *);
void TObjPlayer_vslot72_8c02c984(TObjPlayer *o)
{
    o->f34 &= -0x801;
    operation_8c02c998((void *)o);
}
