#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TKomorebi_ctor_8c0817d4 ((void (*)(void *,void *,void *))0x8c0817d4)
void *TKomorebi_create_8c081790(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x94);
 if(object) TKomorebi_ctor_8c0817d4(object,*(void **)0x8c44be98,argument);
 return object;
}
