#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjEZBoneRotPlayer_ctor_8c08b584 ((void (*)(void *,void *,float *,void *))0x8c08b584)
void *spawn_effect_alt_8c08b538(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xa4);
 if(effect) TObjEZBoneRotPlayer_ctor_8c08b584(effect,resource,position,owner);
 return effect;
}
