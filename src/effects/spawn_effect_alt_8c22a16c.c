#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjDFDemo5_ctor_8c22a1b8 ((void (*)(void *,void *,float *,void *))0x8c22a1b8)
void *TObjDFDemo5_create_8c22a16c(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x11c);
 if(effect) TObjDFDemo5_ctor_8c22a1b8(effect,resource,position,owner);
 return effect;
}
