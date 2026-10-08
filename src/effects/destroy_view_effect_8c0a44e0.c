#include "src/include/view_effect.h"
ViewEffect *destroy_view_effect_8c0a44e0(ViewEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c265b50;*(int *)0x8c46f0a0=0;((void (*)(ViewEffect *,int))0x8c0a0b28)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
