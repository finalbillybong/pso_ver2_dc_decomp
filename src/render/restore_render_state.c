#include "src/include/render_state_blocks.h"
extern RenderStateBlock render_current,render_backup;
extern void apply_state(RenderStateBlock *);
extern void set_parameters(int,void *);
extern void set_view(void *);
void restore_render_state(void){render_current=render_backup;apply_state(&render_current);*(float *)0x8c57555c=1.0f;*(float *)0x8c575560=0.8500000238418579f;set_view((void *)0x8c46ee84);set_parameters(2,&render_current.values[5]);}
