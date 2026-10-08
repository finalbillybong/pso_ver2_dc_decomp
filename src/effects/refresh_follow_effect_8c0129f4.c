#define capture_at ((void (*)(void *))0x8c012884)
#define refresh_at ((void (*)(void *))0x8c162fbc)
void refresh_follow_effect_8c0129f4(void *effect){capture_at(effect);refresh_at(effect);}
