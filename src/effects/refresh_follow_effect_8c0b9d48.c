#define capture_at ((void (*)(void *))0x8c0b9d68)
#define refresh_at ((void (*)(void *))0x8c0b9f74)
void refresh_follow_effect_8c0b9d48(void *effect){capture_at(effect);refresh_at(effect);}
