#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c1c43f4)
void *TObjRaderHideCol_create_8c0342b8(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x9c);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
