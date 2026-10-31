#define capture_at ((void (*)(void *))0x8c032748)
#define refresh_at ((void (*)(void *))0x8c03280c)
void TScene_update_8c0316cc(void *effect){capture_at(effect);refresh_at(effect);}
