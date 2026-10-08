#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c46f540)
int query_fade_active(void){int result;if(current)result=current->active;else result=0;return result;}
