#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecGiFoie_ctor_8c0b1cdc(void *,void *,void *,void *);
void *TTecGiFoie_create_8c0b2190(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,340);
 if(effect) effect=TTecGiFoie_ctor_8c0b1cdc(effect,a,b,c);
 return effect;
}
