#include "src/include/template_effect.h"
extern void *lookup_owner_at(unsigned short);
#define update_at ((void (*)(void *))0x8c0ada54)
void update_template_effect(TemplateEffect *effect) {
 effect->owner=lookup_owner_at(effect->owner_id);
 if(!effect->owner)effect->flags|=1;
 else {update_at(effect);effect->flags|=1;}
}
