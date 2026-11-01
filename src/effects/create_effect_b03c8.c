#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecDeband_ctor_1_8c0afe6c(void *,void *,void *,void *);
void *TTecDeband_create_8c0b03c8(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,348);
 if(effect) effect=TTecDeband_ctor_1_8c0afe6c(effect,a,b,c);
 return effect;
}
