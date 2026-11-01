#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TTecRaBarta_ctor_1_8c0b6e0c(void *,void *,void *,void *);
void *create_effect_b03c8_8c0b7640(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,344);
 if(effect) effect=TTecRaBarta_ctor_1_8c0b6e0c(effect,a,b,c);
 return effect;
}
