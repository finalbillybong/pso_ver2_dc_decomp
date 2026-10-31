#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c46f540)
#define TObject_dtor_8c03311c ((void (*)(void *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
FadeState *destroy_fade_state(FadeState *state,short flags){if(state){state->dispatch=(void *)0x8c266774;current=0;TObject_dtor_8c03311c(state,0);if(flags>0)release_at(*(void **)0x8c4d97e0,state);}return state;}
