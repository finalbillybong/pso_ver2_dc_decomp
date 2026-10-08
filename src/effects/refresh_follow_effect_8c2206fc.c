#define capture_at ((void (*)(void *))0x8c089348)
#define refresh_at ((void (*)(void *))0x8c220728)
void refresh_follow_effect_8c2206fc(void *effect){capture_at(effect);refresh_at(effect);}
