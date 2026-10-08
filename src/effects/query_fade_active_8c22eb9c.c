#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c506504)
int query_fade_active_8c22eb9c(void){int result;if(current)result=current->active;else result=0;return result;}
