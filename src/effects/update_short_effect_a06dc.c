#include "src/include/short_effect.h"
#define spawn_at ((void (*)(Vector3 *,int))0x8c0a777c)
void update_short_effect_a06dc(ShortEffect *effect){switch(effect->state){case 0:{int i;effect->state=1;for(i=0;i<4;i++){if(i==2){Vector3 position;position.x=effect->position.x;position.y=effect->position.y-15.0f;position.z=effect->position.z;spawn_at(&position,i+4);}else if(i==3)spawn_at(&effect->position,13);else spawn_at(&effect->position,i+4);}break;}case 1:effect->ticks++;if(effect->ticks>60)effect->flags|=1;break;}}
