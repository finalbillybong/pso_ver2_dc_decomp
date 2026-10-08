#include "src/include/view_effect.h"
void deactivate_view_effect(ViewChildOwner *effect){if(effect->child)effect->child->flags|=1;effect->child=0;((void (*)(void))0x8c0a22dc)();*(int *)0x8c46f080=0;}
