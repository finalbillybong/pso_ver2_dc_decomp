#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,float *,void *))0x8c0ab558)
void *spawn_effect_alt(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e4,0xa0);
 if(effect) initialize_at(effect,resource,position,owner);
 return effect;
}
