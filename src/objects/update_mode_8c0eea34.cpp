#include "src/include/classes/TORainbowCave01.h"
extern "C" int operation_03d338(void);
extern "C" void operation_0eeb58(TORainbowCave01 *);
extern "C" void update_mode_8c0eea34(TORainbowCave01 *o)
{
    if (operation_03d338() == 1) o->v15();
    else if (*(int *)((char *)o + 0xf4)) operation_0eeb58(o);
}
