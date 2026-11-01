#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecZarua_ctor_8c0babf0(void *,void *,void *,void *,void *);
void *TTecZarua_create_8c0bada4(void *a,void *b,void *c,void *d){void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,264);if(effect)effect=TTecZarua_ctor_8c0babf0(effect,a,b,c,d);return effect;}
