#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjInfoCol_ctor_8c1a16f0 ((void (*)(void *,void *,void *))0x8c1a16f0)
void *TObjInfoCol_create_8c0343fc(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xe8);
 if(object) TObjInfoCol_ctor_8c1a16f0(object,*(void **)0x8c44be98,argument);
 return object;
}
