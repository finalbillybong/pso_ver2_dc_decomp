#include "src/include/render_state_blocks.h"
extern RenderStateBlock render_current,render_backup;
extern RenderParameterBlock render_parameters;
extern void set_parameters(int,void *);
void backup_render_state(void){RenderParameterBlock parameters=render_parameters;render_backup=render_current;set_parameters(0,&parameters);}
