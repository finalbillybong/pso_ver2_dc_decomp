#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecBarta_ctor_2_8c0acd00(void *,void *,void *,void *,void *);
void *TTecBarta_create_8c0ad2f8(void *a,void *b,void *c,void *d) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,404);
 if(effect) effect=TTecBarta_ctor_2_8c0acd00(effect,a,b,c,d);
 return effect;
}
