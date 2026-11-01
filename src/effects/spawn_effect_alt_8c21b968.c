#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjDFHorming_ctor_8c21b9b4 ((void (*)(void *,void *,float *,void *))0x8c21b9b4)
void *TObjDFHorming_create_8c21b968(void *resource,float *position,void *owner) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x39c);
 if(effect) TObjDFHorming_ctor_8c21b9b4(effect,resource,position,owner);
 return effect;
}
