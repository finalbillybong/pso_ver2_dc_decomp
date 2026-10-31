#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *))0x8c0a2ed4)
void create_effect_a2ed4(void){void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,220);if(object)initialize_at(object,*(void **)0x8c44be8c);}
