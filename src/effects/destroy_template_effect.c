#include "src/include/template_effect.h"
#define destroy_parent_at ((void (*)(void *,int))0x8c0ad870)
#define release_at ((void (*)(void *,void *))0x8c122774)
TemplateEffect *destroy_template_effect(TemplateEffect *effect,short flags) {
 if(effect) {
  effect->dispatch=(void *)0x8c265fa0;
  destroy_parent_at(effect,0);
  if(flags>0)release_at(*(void **)0x8c4d97e0,effect);
 }
 return effect;
}
