#define capture_at ((void (*)(void *))0x8c0db30c)
#define refresh_at ((void (*)(void *))0x8c0db430)
void refresh_follow_effect_8c21551c(void *effect){capture_at(effect);refresh_at(effect);}
