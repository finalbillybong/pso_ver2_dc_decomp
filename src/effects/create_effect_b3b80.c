#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecJelin_ctor_8c0b39cc(void *,void *,void *,void *,void *);
void *TTecJelin_create_8c0b3b80(void *a,void *b,void *c,void *d) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,264);
 if(effect) effect=TTecJelin_ctor_8c0b39cc(effect,a,b,c,d);
 return effect;
}
