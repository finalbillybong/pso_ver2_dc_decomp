#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecGiBarta_ctor_1_8c0b11f4(void *,void *,void *,void *,void *);
void *TTecGiBarta_create_8c0b1aa0(void *a,void *b,void *c,void *d) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,404);
 if(effect) effect=TTecGiBarta_ctor_1_8c0b11f4(effect,a,b,c,d);
 return effect;
}
