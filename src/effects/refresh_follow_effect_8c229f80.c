#define capture_at ((void (*)(void *))0x8c229fa0)
#define refresh_at ((void (*)(void *))0x8c22a090)
void refresh_follow_effect_8c229f80(void *effect){capture_at(effect);refresh_at(effect);}
