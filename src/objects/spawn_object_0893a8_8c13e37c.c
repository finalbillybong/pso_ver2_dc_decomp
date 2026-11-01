#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOMineIcon03_ctor_8c13e100 ((void (*)(void *,void *,void *))0x8c13e100)
void *TOMineIcon03_create_8c13e37c(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x390);
 if(object) TOMineIcon03_ctor_8c13e100(object,*(void **)0x8c44be98,argument);
 return object;
}
