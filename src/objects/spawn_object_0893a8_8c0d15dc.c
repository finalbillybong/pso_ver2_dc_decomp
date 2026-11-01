#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjEneRe7Berura_ctor_8c0d1684 ((void (*)(void *,void *,void *))0x8c0d1684)
void *TObjEneRe7Berura_create_8c0d15dc(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x4ac);
 if(object) TObjEneRe7Berura_ctor_8c0d1684(object,*(void **)0x8c44be94,argument);
 return object;
}
