#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TLazerFenceSw_ctor_8c113750 ((void (*)(void *,void *,void *))0x8c113750)
void *TLazerFenceSw_create_8c1139e0(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x144);
 if(object) TLazerFenceSw_ctor_8c113750(object,*(void **)0x8c44be98,argument);
 return object;
}
