#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOKeyCave01_ctor_8c134f28 ((void (*)(void *,void *,void *))0x8c134f28)
void *TOKeyCave01_create_8c135174(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x130);
 if(object) TOKeyCave01_ctor_8c134f28(object,*(void **)0x8c44be98,argument);
 return object;
}
