#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c46f540)
void start_reverse_fade(void (*callback)(void)){if(current){current->callback=callback;current->amount=0.0f;current->red=current->green=current->blue=0;current->active=2;}}
