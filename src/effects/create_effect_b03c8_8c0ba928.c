#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern void *initialize_at(void *,void *,void *,void *);
void *create_effect_b03c8_8c0ba928(void *a,void *b,void *c) {
 void *effect=allocate_at(*(void **)0x8c4d97e0,348);
 if(effect) effect=initialize_at(effect,a,b,c);
 return effect;
}
