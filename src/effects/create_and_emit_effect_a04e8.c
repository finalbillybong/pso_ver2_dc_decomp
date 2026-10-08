#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern void *initialize_at(void *,void *);
extern void emit_at(int,void *,void *,void *);
void create_and_emit_effect_a04e8(void *position){void *effect=allocate_at(*(void **)0x8c4d97e0,120);if(effect)initialize_at(effect,position);emit_at(0x10000,0,0,0);}
