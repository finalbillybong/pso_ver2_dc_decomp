#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *))0x8c0a1448)
void create_effect_a1448(void){void *object=allocate_at(*(void **)0x8c4d97e0,248);if(object)initialize_at(object,*(void **)0x8c44be88);}
