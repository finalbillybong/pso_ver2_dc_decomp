#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjLazerFence4_ctor_8c11d5c8 ((void (*)(void *,void *,void *))0x8c11d5c8)
void *TObjLazerFence4_create_8c11d878(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x130);
 if(object) TObjLazerFence4_ctor_8c11d5c8(object,*(void **)0x8c44be98,argument);
 return object;
}
