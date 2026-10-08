#include "src/include/short_effect.h"
#define spawn_at ((void (*)(Vector3 *,int))0x8c0a777c)
void update_short_effect_a05bc(ShortEffect *effect){switch(effect->state){case 0:{int i;effect->state=1;for(i=0;i<4;i++){spawn_at(&effect->position,i);}break;}case 1:effect->ticks++;if(effect->ticks>60)effect->flags|=1;break;}}
