#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TCameraBehaiv_ctor_8c0a1180 ((void (*)(void *,void *,void *))0x8c0a1180)
void *TCameraBehaiv_create_8c0a1404(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xa4);
 if(object) TCameraBehaiv_ctor_8c0a1180(object,*(void **)0x8c44be9c,argument);
 return object;
}
