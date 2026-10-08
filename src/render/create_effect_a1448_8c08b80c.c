#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *))0x8c08b8bc)
void create_effect_a1448_8c08b80c(void){void *object=allocate_at(*(void **)0x8c4d97e0,0x110);if(object)initialize_at(object,*(void **)0x8c44be8c);}
