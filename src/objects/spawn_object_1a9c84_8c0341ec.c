#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjRaderCol_ctor_8c1c41cc ((void (*)(void *,void *,void *))0x8c1c41cc)
void *TObjRaderCol_create_8c0341ec(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xa4);
 if(object) TObjRaderCol_ctor_8c1c41cc(object,*(void **)0x8c44be98,argument);
 return object;
}
