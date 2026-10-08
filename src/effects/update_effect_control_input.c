/* Keep signed axes, asymmetric deadzone endpoints, post-root reloads,
 * float operation order and independent elevation clamps. */
#include "src/include/effect_control_input.h"
#define input_at ((EffectControlInput *(*)(int))0x8c36b024)
#define root_at ((float (*)(float))0x8c37f6c0)
void update_effect_control_input(EffectControlView *o){
 EffectControlInput *input=input_at(6);
 float x=input->x,y=input->y,magnitude;
 short horizontal,vertical,depth;
 if(x>-12.0f && x<=12.0f)x=0.0f;
 if(y>-12.0f && y<=12.0f)y=0.0f;
 magnitude=root_at(x*x+y*y);
 if(magnitude!=0.0f)magnitude/=128.0f;
 if(magnitude>1.0f)magnitude=1.0f;
 horizontal=input->x;vertical=input->y;depth=input->depth;
 if(magnitude>0.2f){
  short step=(short)(magnitude*2.5f);
  if(horizontal>0)o->rotation+=(int)((float)step*65536.0f/360.0f);
  else o->rotation-=(int)((float)step*65536.0f/360.0f);
  o->rotation&=0xffff;
 }
 o->vertical-=(float)vertical*0.1f;
 o->depth-=(float)depth*0.1f;
 if(input->flags&0x200)o->elevation+=182;
 else if(input->flags&4)o->elevation-=182;
 if(o->elevation>=0x5555)o->elevation=0x5555;
 if(o->elevation<=0xe38)o->elevation=0xe38;
}
