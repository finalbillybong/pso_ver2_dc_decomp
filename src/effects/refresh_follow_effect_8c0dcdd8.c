#define capture_at ((void (*)(void *))0x8c0dcdfc)
#define refresh_at ((void (*)(void *))0x8c0dcf10)
void refresh_follow_effect_8c0dcdd8(void *effect){capture_at(effect);refresh_at(effect);}
