#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c161cf0)
void *TODoorMachine01_create_8c161fd8(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x124);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
