#include "src/include/render_view_parameters.h"
#include "src/include/render_flags_view.h"
extern RenderFlagsView render_flags;
extern RenderViewState render_current;
extern RenderViewParameters *view_parameters;
extern void initialize_view(void *);
extern void set_projection(void *,float,float);
extern void set_angle(void *,int);
extern void set_translation(void *,float,float,float);
extern void set_direction(void *,float,float,float);
extern void apply_view(void *);
void initialize_render_view(void){unsigned int offset;render_flags.state=0;render_flags.value2=0;render_flags.value4=0;render_flags.flags=0;render_current.value0=0.0f;render_current.value4=0.0f;render_current.value8=0.0f;render_current.value12=0.0f;render_current.value16=0.0f;render_current.value20=0.0f;render_current.value24=0.0f;render_current.value28=0.0f;render_current.value32=0.0f;render_current.value36=1.0f;render_current.value40=0.8500000238418579f;((void (*)(void))0x8c0a0f00)();initialize_view((void *)0x8c46ee84);offset=(unsigned int)((int (*)(void))0x8c032b10)()*sizeof(RenderViewParameters);set_projection((void *)0x8c46ee84,*(float *)((char *)&view_parameters->first+offset),*(float *)((char *)&view_parameters->second+offset));set_angle((void *)0x8c46ee84,0x2e38);set_translation((void *)0x8c46ee84,0.0f,0.0f,0.0f);set_direction((void *)0x8c46ee84,0.0f,0.0f,-1.0f);apply_view((void *)0x8c46ee84);*(int *)0x8c46efc4=0;}
