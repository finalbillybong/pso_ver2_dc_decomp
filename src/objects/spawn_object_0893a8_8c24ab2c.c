#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjBigTuitate_ctor_8c24ab70 ((void (*)(void *,void *,void *))0x8c24ab70)
void *TObjBigTuitate_create_8c24ab2c(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x104);
 if(object) TObjBigTuitate_ctor_8c24ab70(object,*(void **)0x8c44be98,argument);
 return object;
}
