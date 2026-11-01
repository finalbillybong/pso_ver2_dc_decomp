#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjCamera_ctor_8c24a100 ((void (*)(void *,void *,void *))0x8c24a100)
void *TObjCamera_create_8c24a0bc(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x1e4);
 if(object) TObjCamera_ctor_8c24a100(object,*(void **)0x8c44be98,argument);
 return object;
}
