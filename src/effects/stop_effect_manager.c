#include "src/include/hierarchy.h"
#include "src/include/effect_manager.h"
#define base_at ((void (*)(EffectManager *))0x8c03ce90)
void stop_effect_manager(EffectManager *p) {
 ((HierarchyNode *)p->effect)->flags|=1;
 base_at(p);
}
