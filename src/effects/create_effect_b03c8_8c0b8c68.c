#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecRaZonde_ctor_8c0b871c(void *,void *,void *,void *);
void *TTecRaZonde_create_8c0b8c68(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,364);
 if(effect) effect=TTecRaZonde_ctor_8c0b871c(effect,a,b,c);
 return effect;
}
