#include "src/include/effect_manager.h"

#define allocate_at ((void *(*)(void *, unsigned int))0x8c122700)
#define initialize_at ((EffectManager *(*)(EffectManager *, void *))0x8c0a7db8)

/* Provisional void wrapper: the reference does not preserve a separate result. */
void create_effect_manager(void) {
    EffectManager *p = allocate_at(*(void **)0x8c4d97e0, sizeof(EffectManager));
    if (p) initialize_at(p, *(void **)0x8c44be8c);
}
