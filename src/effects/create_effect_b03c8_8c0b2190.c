#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *initialize_at(void *,void *,void *,void *);
void *create_effect_b03c8_8c0b2190(void *a,void *b,void *c) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,340);
 if(effect) effect=initialize_at(effect,a,b,c);
 return effect;
}
