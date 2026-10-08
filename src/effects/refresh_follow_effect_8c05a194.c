#define capture_at ((void (*)(void *))0x8c0129f4)
#define refresh_at ((void (*)(void *))0x8c09e6d0)
void refresh_follow_effect_8c05a194(void *effect){capture_at(effect);refresh_at(effect);}
