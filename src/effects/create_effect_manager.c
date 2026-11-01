#include "src/include/effect_manager.h"

#define heap_alloc_8c122700 ((void *(*)(void *, unsigned int))0x8c122700)
#define TParticleEditor_ctor_8c0a7db8 ((EffectManager *(*)(EffectManager *, void *))0x8c0a7db8)

/* Provisional void wrapper: the reference does not preserve a separate result. */
void TParticleEditor_create_8c0a9510(void) {
    EffectManager *p = heap_alloc_8c122700(*(void **)0x8c4d97e0, sizeof(EffectManager));
    if (p) TParticleEditor_ctor_8c0a7db8(p, *(void **)0x8c44be8c);
}
