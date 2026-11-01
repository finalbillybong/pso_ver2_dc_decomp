#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c05c9e8)
void *TObjEneRe2Flower_create_8c05c974(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x448);
 if(object) initialize_at(object,*(void **)0x8c44be94,argument);
 return object;
}
