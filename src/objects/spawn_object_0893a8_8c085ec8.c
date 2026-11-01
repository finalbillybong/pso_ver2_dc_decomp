#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjComputer_ctor_8c085d00 ((void (*)(void *,void *,void *))0x8c085d00)
void *TObjComputer_create_8c085ec8(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xf0);
 if(object) TObjComputer_ctor_8c085d00(object,*(void **)0x8c44be98,argument);
 return object;
}
