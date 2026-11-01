#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOMineIcon01_ctor_8c13db50 ((void (*)(void *,void *,void *))0x8c13db50)
void *TOMineIcon01_create_8c13ddcc(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x390);
 if(object) TOMineIcon01_ctor_8c13db50(object,*(void **)0x8c44be98,argument);
 return object;
}
