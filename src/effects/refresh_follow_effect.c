#define capture_at ((void (*)(void *))0x8c0a0828)
#define refresh_at ((void (*)(void *))0x8c0a0934)
void refresh_follow_effect(void *effect){capture_at(effect);refresh_at(effect);}
