/* Preserve the base-plus-offset null test and signed short step conversion. */
#include "src/include/effect_control_input.h"
void update_effect_rotation_record(EffectControlView *o){
 char *base=(char *)0x8c41cba0;
 EffectRotationRecord *input=(EffectRotationRecord *)(base+32);
 if(input){
  short horizontal=input->horizontal;
  float magnitude=input->magnitude;
  if(magnitude>0.2f){
   short step=(short)(magnitude*2.5f);
   if(horizontal>0)o->rotation+=(int)((float)step*65536.0f/360.0f);
   else o->rotation-=(int)((float)step*65536.0f/360.0f);
   o->rotation&=0xffff;
  }
 }
}
