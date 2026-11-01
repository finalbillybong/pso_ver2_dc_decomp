#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjTank_ctor_8c0800ec ((void (*)(void *,void *,void *))0x8c0800ec)
void *TObjTank_create_8c0800a8(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xe4);
 if(object) TObjTank_ctor_8c0800ec(object,*(void **)0x8c44be98,argument);
 return object;
}
