#include "src/include/color_effect.h"
#define TObject_ctor_8c0330e4 ((void (*)(void *,void *))0x8c0330e4)
#define TObject_dtor_8c03311c ((void (*)(void *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
void update_color_blue(ColorEffect *effect){effect->amount+=2.0f;if(!(effect->amount<128.0f)){effect->amount=128.0f;if(effect->callback)effect->callback();effect->flags|=4;}}