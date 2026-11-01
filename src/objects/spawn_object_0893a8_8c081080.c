#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjLazerFenceExtra_ctor_8c0810c4 ((void (*)(void *,void *,void *))0x8c0810c4)
void *TObjLazerFenceExtra_create_8c081080(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x114);
 if(object) TObjLazerFenceExtra_ctor_8c0810c4(object,*(void **)0x8c44be98,argument);
 return object;
}
