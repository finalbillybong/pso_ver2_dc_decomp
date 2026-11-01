#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjDFDemo3_ctor_8c229584 ((void (*)(void *,void *,float *,void *))0x8c229584)
void *TObjDFDemo3_create_8c229538(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xcc);
 if(effect) TObjDFDemo3_ctor_8c229584(effect,resource,position,owner);
 return effect;
}
