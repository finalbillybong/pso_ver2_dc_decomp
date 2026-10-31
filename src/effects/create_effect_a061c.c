#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *initialize_at(void *,void *);
void *create_effect_a061c(void *position){void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,120);if(effect)effect=initialize_at(effect,position);return effect;}
