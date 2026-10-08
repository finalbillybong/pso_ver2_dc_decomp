#define capture_at ((void (*)(void *))0x8c0259f8)
#define refresh_at ((void (*)(void *))0x8c025a44)
void refresh_follow_effect_8c1ededc(void *effect){capture_at(effect);refresh_at(effect);}
