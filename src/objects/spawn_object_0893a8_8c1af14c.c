#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TODoorMachine02_ctor_8c1aeea4 ((void (*)(void *,void *,void *))0x8c1aeea4)
void *create_dat_object_0102_8c1af14c(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x11c);
 if(object) TODoorMachine02_ctor_8c1aeea4(object,*(void **)0x8c44be98,argument);
 return object;
}
