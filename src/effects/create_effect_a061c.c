#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TEffHit_ctor_8c0a064c(void *,void *);
void *TEffHit_create_8c0a061c(void *position){void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,120);if(effect)effect=TEffHit_ctor_8c0a064c(effect,position);return effect;}
