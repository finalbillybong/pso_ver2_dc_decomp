#include "src/include/color_effect.h"
#define TObject_ctor_8c0330e4 ((void (*)(void *,void *))0x8c0330e4)
#define TItemShoot_dtor_8c1abb78 ((void (*)(void *,int))0x8c1abb78)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *TItemShootRocketPunch_dtor_8c23fc14(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c27bfbc;if(effect){effect->dispatch=(void *)0x8c2748b4;TItemShoot_dtor_8c1abb78(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
