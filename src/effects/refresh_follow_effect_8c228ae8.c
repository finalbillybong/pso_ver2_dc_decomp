#define capture_at ((void (*)(void *))0x8c228b08)
#define refresh_at ((void (*)(void *))0x8c228c1c)
void refresh_follow_effect_8c228ae8(void *effect){capture_at(effect);refresh_at(effect);}
