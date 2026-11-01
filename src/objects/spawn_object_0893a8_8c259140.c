#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjResultWin_ctor_8c259184 ((void (*)(void *,void *,void *))0x8c259184)
void *TObjResultWin_create_8c259140(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x160);
 if(object) TObjResultWin_ctor_8c259184(object,*(void **)0x8c44bea0,argument);
 return object;
}
