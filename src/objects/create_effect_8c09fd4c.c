#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern void *initialize_at(void *,void *);
void *create_effect_8c09fd4c(void *position){void *effect=allocate_at(*(void **)0x8c4d97e0,124);if(effect)effect=initialize_at(effect,position);return effect;}
