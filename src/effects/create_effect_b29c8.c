#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecGiZonde_ctor_8c0b262c(void *,void *,void *,void *,void *);
void *TTecGiZonde_create_8c0b29c8(void *a,void *b,void *c,void *d){void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,424);if(effect)effect=TTecGiZonde_ctor_8c0b262c(effect,a,b,c,d);return effect;}
