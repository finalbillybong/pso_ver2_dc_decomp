#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecSifta_ctor_1_8c0ba2cc(void *,void *,void *,void *);
void *TTecSifta_create_8c0ba928(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,348);
 if(effect) effect=TTecSifta_ctor_1_8c0ba2cc(effect,a,b,c);
 return effect;
}
