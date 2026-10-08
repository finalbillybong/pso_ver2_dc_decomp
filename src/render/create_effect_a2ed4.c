#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *))0x8c0a2ed4)
void create_effect_a2ed4(void){void *object=allocate_at(*(void **)0x8c4d97e0,220);if(object)initialize_at(object,*(void **)0x8c44be8c);}
