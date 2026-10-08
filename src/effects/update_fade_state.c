#include "src/include/fade_state.h"
#define current (*(FadeState **)0x8c46f540)
void update_fade_state(FadeState *state){switch(state->active){
 case 0:break;
 case 1:state->amount-=8.0f;if(!(state->amount>0.0f)){state->amount=0.0f;if(state->callback)state->callback();state->active=0;}break;
 case 2:state->amount+=8.0f;if(!(state->amount<255.0f)){state->amount=255.0f;if(state->callback)state->callback();state->active=0;}break;
 case 3:state->amount+=1.0f;if(!(state->amount<128.0f)){state->amount=128.0f;if(state->callback)state->callback();state->active=0;}break;
 }}
