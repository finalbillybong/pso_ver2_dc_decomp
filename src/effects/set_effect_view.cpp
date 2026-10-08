#include "src/include/effect_view.h"
extern "C" void set_effect_view(float *position,float *target,int orientation){
 unsigned char i=*(unsigned char *)0x8c46efc8;
 if(i==0 || i==8){
  EffectView *e=*(EffectView **)((char *)0x8c3032d8+((unsigned int)i<<2));
  if(e){e->flags|=8;e->orient(orientation);
   e->position[0]=position[0];e->position[1]=position[1];e->position[2]=position[2];
   e->target[0]=target[0];e->target[1]=target[1];e->target[2]=target[2];
  }
 }
}
