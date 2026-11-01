#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOFenceAncient03_ctor_8c0f2c48 ((void (*)(void *,void *,void *))0x8c0f2c48)
void *TOFenceAncient03_create_8c0f2f10(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x110);
 if(object) TOFenceAncient03_ctor_8c0f2c48(object,*(void **)0x8c44be98,argument);
 return object;
}
