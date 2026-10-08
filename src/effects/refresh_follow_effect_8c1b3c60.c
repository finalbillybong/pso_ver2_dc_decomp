#define capture_at ((void (*)(void *))0x8c1b4164)
#define refresh_at ((void (*)(void *))0x8c1b3c80)
void refresh_follow_effect_8c1b3c60(void *effect){capture_at(effect);refresh_at(effect);}
