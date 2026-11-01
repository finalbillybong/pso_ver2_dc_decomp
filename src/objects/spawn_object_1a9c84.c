#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjBgmCol_ctor_8c1a9c84 ((void (*)(void *,void *,void *))0x8c1a9c84)
void *TObjBgmCol_create_8c034120(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xa4);
 if(object) TObjBgmCol_ctor_8c1a9c84(object,*(void **)0x8c44be98,argument);
 return object;
}
