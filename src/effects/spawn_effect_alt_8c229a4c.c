#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,float *,void *))0x8c229a98)
void *spawn_effect_alt_8c229a4c(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x10c);
 if(effect) initialize_at(effect,resource,position,owner);
 return effect;
}
