#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjTuitate_ctor_8c24a830 ((void (*)(void *,void *,void *))0x8c24a830)
void *TObjTuitate_create_8c24a7ec(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x104);
 if(object) TObjTuitate_ctor_8c24a830(object,*(void **)0x8c44be98,argument);
 return object;
}
