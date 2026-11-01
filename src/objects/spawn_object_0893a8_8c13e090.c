#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOMineIcon02_ctor_8c13de14 ((void (*)(void *,void *,void *))0x8c13de14)
void *TOMineIcon02_create_8c13e090(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x390);
 if(object) TOMineIcon02_ctor_8c13de14(object,*(void **)0x8c44be98,argument);
 return object;
}
