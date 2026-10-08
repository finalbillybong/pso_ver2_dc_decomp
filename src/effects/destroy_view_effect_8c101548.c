#include "src/include/view_effect.h"
ViewEffect *destroy_view_effect_8c101548(ViewEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c269578;*(int *)0x8c4d59d8=0;((void (*)(ViewEffect *,int))0x8c01d2b0)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
