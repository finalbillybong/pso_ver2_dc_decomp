#include "src/include/view_effect.h"
ViewEffect *destroy_view_effect(ViewEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c265af0;*(int *)0x8c46f080=0;((void (*)(ViewEffect *,int))0x8c03ca10)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
