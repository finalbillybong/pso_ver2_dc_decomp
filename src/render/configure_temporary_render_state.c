#include "src/include/render_state_blocks.h"
extern void apply_state(RenderStateBlock *);
extern void apply_view(void *);
extern void set_parameters(int,void *);
void configure_temporary_render_state(void){RenderStateBlock state;state.values[3]=320.0f;state.values[4]=240.0f;state.values[1]=640.0f;state.values[2]=480.0f;state.values[0]=250.0f;state.values[5]=0.0f;state.values[6]=0.0f;state.values[7]=20.0f;state.values[8]=15.0f;*(float *)0x8c57555c=1.0f;*(float *)0x8c575560=0.8500000238418579f;apply_state(&state);apply_view((void *)0x8c46ee84);set_parameters(2,&state.values[5]);}
