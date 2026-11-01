#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TODoorCave01_ctor_8c1323dc ((void (*)(void *,void *,void *))0x8c1323dc)
void *TODoorCave01_create_8c1326c4(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x124);
 if(object) TODoorCave01_ctor_8c1323dc(object,*(void **)0x8c44be98,argument);
 return object;
}
