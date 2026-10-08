#include "src/include/effect_color.h"
void step_effect_color_components(EffectColor *value,const EffectColor *target,float step){
if(value->red<target->red){float next=value->red+step;value->red=next<0.0f?0.0f:(next<target->red?next:target->red);}else{float next=value->red-step;value->red=next<target->red?target->red:(next<1.0f?next:1.0f);}
if(value->green<target->green){float next=value->green+step;value->green=next<0.0f?0.0f:(next<target->green?next:target->green);}else{float next=value->green-step;value->green=next<target->green?target->green:(next<1.0f?next:1.0f);}
if(value->blue<target->blue){float next=value->blue+step;value->blue=next<0.0f?0.0f:(next<target->blue?next:target->blue);}else{float next=value->blue-step;value->blue=next<target->blue?target->blue:(next<1.0f?next:1.0f);}
}

int step_effect_color_alpha(EffectColor *value,const EffectColor *target,float step){
if(value->alpha==target->alpha)return 1;
if(value->alpha<target->alpha){float next=value->alpha+step;value->alpha=next<0.0f?0.0f:(next<target->alpha?next:target->alpha);}else{float next=value->alpha-step;value->alpha=next<target->alpha?target->alpha:(next<1.0f?next:1.0f);}
return 0;
}
#define interpolate_at ((void (*)(Vector3 *,Vector3 *,Vector3 *,float))0x8c0c51d8)
void interpolate_effect_vector(Vector3 *value,Vector3 *target,float amount){Vector3 temporary;interpolate_at(value,target,&temporary,amount);value->x=temporary.x;value->y=temporary.y;value->z=temporary.z;}
