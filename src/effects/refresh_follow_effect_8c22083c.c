#define capture_at ((void (*)(void *))0x8c2208a4)
#define refresh_at ((void (*)(void *))0x8c220920)
void refresh_follow_effect_8c22083c(void *effect){capture_at(effect);refresh_at(effect);}
