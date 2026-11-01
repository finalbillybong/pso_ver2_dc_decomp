#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjDoorKey_ctor_8c081abc ((void (*)(void *,void *,void *))0x8c081abc)
void *TObjDoorKey_create_8c081a78(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x130);
 if(object) TObjDoorKey_ctor_8c081abc(object,*(void **)0x8c44be98,argument);
 return object;
}
