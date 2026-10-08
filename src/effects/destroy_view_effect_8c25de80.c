#include "src/include/view_effect.h"
ViewEffect *destroy_view_effect_8c25de80(ViewEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c281ce4;*(int *)0x8c513460=0;((void (*)(ViewEffect *,int))0x8c03311c)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
