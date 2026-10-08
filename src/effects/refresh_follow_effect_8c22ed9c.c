#define capture_at ((void (*)(void *))0x8c22efa0)
#define refresh_at ((void (*)(void *))0x8c22edbc)
void refresh_follow_effect_8c22ed9c(void *effect){capture_at(effect);refresh_at(effect);}
