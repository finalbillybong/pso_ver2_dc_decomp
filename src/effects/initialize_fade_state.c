#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c46f540)
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
FadeState *initialize_fade_state(FadeState *state,void *owner){attach_at(state,owner);state->dispatch=(void *)0x8c266774;current=state;state->active=0;return state;}
