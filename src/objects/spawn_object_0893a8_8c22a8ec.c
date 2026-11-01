#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjSinBoard_ctor_8c22a930 ((void (*)(void *,void *,void *))0x8c22a930)
void *TObjSinBoard_create_8c22a8ec(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x94);
 if(object) TObjSinBoard_ctor_8c22a930(object,*(void **)0x8c44be98,argument);
 return object;
}
