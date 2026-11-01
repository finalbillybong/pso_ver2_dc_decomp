#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern void *TEffGuard_ctor_8c0a052c(void *,void *);
extern void play_se_8c05fbf8(int,void *,void *,void *);
void create_and_emit_effect_a04e8(void *position){void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,120);if(effect)TEffGuard_ctor_8c0a052c(effect,position);play_se_8c05fbf8(0x10000,0,0,0);}
