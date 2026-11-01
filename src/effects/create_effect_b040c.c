#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecDeband_ctor_2_8c0b0058(void *,void *,void *,void *,void *);
void *TTecDeband_create_8c0b040c(void *a,void *b,void *c,void *d) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,348);
 if(effect) effect=TTecDeband_ctor_2_8c0b0058(effect,a,b,c,d);
 return effect;
}
