#define capture_at ((void (*)(void *))0x8c052098)
#define refresh_at ((void (*)(void *))0x8c05b0ec)
void refresh_follow_effect_8c05af60(void *effect){capture_at(effect);refresh_at(effect);}
