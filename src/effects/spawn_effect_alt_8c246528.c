#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjTombstone_ctor_8c246638 ((void (*)(void *,void *,float *,void *))0x8c246638)
void *TObjTombstone_create_8c246528(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x268);
 if(effect) TObjTombstone_ctor_8c246638(effect,resource,position,owner);
 return effect;
}
