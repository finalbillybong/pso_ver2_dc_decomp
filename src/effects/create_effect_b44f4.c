#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define lookup_at ((void *(*)(unsigned int))0x8c021ef8)
extern void *initialize_at(void *,void *,void *,void *,int);
void *create_effect_b44f4(void *a,void *b,void *c,int d) {
 void *effect=allocate_at(*(void **)0x8c4d97e0,300);
 if(effect)effect=initialize_at(effect,a,b,c,d);
 return effect;
}
