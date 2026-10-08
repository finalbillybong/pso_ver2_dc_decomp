#define capture_at ((void (*)(void *))0x8c22a55c)
#define refresh_at ((void (*)(void *))0x8c22a6ac)
void refresh_follow_effect_8c22a53c(void *effect){capture_at(effect);refresh_at(effect);}
