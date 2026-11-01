#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecAnti_ctor_8c0ac300(void *,void *,void *,void *,void *);
void *TTecAnti_create_8c0ac674(void *a,void *b,void *c,void *d) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,348);
 if(effect) effect=TTecAnti_ctor_8c0ac300(effect,a,b,c,d);
 return effect;
}
