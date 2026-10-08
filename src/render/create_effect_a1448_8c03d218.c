#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *))0x8c187094)
void create_effect_a1448_8c03d218(void){void *object=allocate_at(*(void **)0x8c4d97e0,0x84);if(object)initialize_at(object,*(void **)0x8c44be88);}
