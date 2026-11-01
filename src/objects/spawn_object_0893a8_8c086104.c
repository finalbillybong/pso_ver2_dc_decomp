#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TButterfly_ctor_8c086148 ((void (*)(void *,void *,void *))0x8c086148)
void *TButterfly_create_8c086104(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xc0);
 if(object) TButterfly_ctor_8c086148(object,*(void **)0x8c44be98,argument);
 return object;
}
