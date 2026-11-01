#include "src/include/color_effect.h"
#define TObject_ctor_8c0330e4 ((void (*)(void *,void *))0x8c0330e4)
#define TItemEquipBase_dtor_8c20997c ((void (*)(void *,int))0x8c20997c)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *TItemProArmorParticle_dtor_8c2558e0(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c281284;if(effect){effect->dispatch=(void *)0x8c267cb8;TItemEquipBase_dtor_8c20997c(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
