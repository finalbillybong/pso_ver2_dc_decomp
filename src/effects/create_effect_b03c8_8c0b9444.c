#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecResta_ctor_1_8c0b8dc8(void *,void *,void *,void *);
void *TTecResta_create_8c0b9444(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,348);
 if(effect) effect=TTecResta_ctor_1_8c0b8dc8(effect,a,b,c);
 return effect;
}
