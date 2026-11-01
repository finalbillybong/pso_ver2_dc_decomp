#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TEffClitical_ctor_8c09fd7c(void *,void *);
void *TEffClitical_create_8c09fd4c(void *position){void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,124);if(effect)effect=TEffClitical_ctor_8c09fd7c(effect,position);return effect;}
