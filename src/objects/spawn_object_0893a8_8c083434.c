#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjContainerIdo_ctor_8c0831b0 ((void (*)(void *,void *,void *))0x8c0831b0)
void *TObjContainerIdo_create_8c083434(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x144);
 if(object) TObjContainerIdo_ctor_8c0831b0(object,*(void **)0x8c44be98,argument);
 return object;
}
