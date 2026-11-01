#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOKeyMachine01_ctor_8c162618 ((void (*)(void *,void *,void *))0x8c162618)
void *TOKeyMachine01_create_8c162864(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x130);
 if(object) TOKeyMachine01_ctor_8c162618(object,*(void **)0x8c44be98,argument);
 return object;
}
