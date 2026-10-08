#define capture_at ((void (*)(void *))0x8c0521a0)
#define refresh_at ((void (*)(void *))0x8c05228c)
void refresh_follow_effect_8c052180(void *effect){capture_at(effect);refresh_at(effect);}
