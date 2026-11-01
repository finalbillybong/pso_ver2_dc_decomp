#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TODoorCave03_ctor_8c1ae9bc ((void (*)(void *,void *,void *))0x8c1ae9bc)
void *TODoorCave03_create_8c1aeb94(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x11c);
 if(object) TODoorCave03_ctor_8c1ae9bc(object,*(void **)0x8c44be98,argument);
 return object;
}
