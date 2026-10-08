#define reset_at ((void (*)(int))0x8c0c3a40)
#define configure_at ((void (*)(void *,float))0x8c0c44f0)
void prepare_transform_state(void *input,float amount){reset_at(0);configure_at(input,amount);}
