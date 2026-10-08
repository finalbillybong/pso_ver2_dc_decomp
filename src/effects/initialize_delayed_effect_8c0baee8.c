#include "src/include/delayed_effect.h"
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
DelayedEffect *initialize_delayed_effect_8c0baee8(DelayedEffect *effect,Vector3 *position,short id,void *owner) {
 attach_at(effect,owner);
 effect->dispatch=(void *)0x8c266268;
 effect->ticks=0;
 effect->position=*position;
 effect->id=id;
 return effect;
}
