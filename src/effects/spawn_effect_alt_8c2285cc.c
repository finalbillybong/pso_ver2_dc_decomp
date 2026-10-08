#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,float *,void *))0x8c228618)
void *spawn_effect_alt_8c2285cc(void *resource,float *position,void *owner) {
 void *effect=allocate_at(*(void **)0x8c4d97e0,0x120);
 if(effect) initialize_at(effect,resource,position,owner);
 return effect;
}
