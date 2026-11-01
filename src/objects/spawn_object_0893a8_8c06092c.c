#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjEneBm5Wolf_ctor_8c060994 ((void (*)(void *,void *,void *))0x8c060994)
void *TObjEneBm5Wolf_create_8c06092c(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x488);
 if(object) TObjEneBm5Wolf_ctor_8c060994(object,*(void **)0x8c44be94,argument);
 return object;
}
