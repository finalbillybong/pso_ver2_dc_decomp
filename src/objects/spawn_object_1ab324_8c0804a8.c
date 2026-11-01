#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjParticle_ctor_8c0804ec ((void (*)(void *,void *,void *))0x8c0804ec)
void *TObjParticle_create_8c0804a8(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x9c);
 if(object) TObjParticle_ctor_8c0804ec(object,*(void **)0x8c44be98,argument);
 return object;
}
