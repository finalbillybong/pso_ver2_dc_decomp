#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c46f540)
void start_fade_state(void (*callback)(void)){if(current){current->callback=callback;current->amount=255.0f;current->blue=0;current->green=0;current->red=0;current->active=1;}}
