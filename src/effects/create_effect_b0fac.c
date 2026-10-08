#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern void *initialize_at(void *,void *,void *,void *,void *);
void *create_effect_b0fac(void *a,void *b,void *c,void *d) {
 void *effect=allocate_at(*(void **)0x8c4d97e0,336);
 if(effect) effect=initialize_at(effect,a,b,c,d);
 return effect;
}
