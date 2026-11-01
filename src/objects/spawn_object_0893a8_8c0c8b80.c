#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjEneRe4Sorcerer_ctor_8c0c8c08 ((void (*)(void *,void *,void *))0x8c0c8c08)
void *TObjEneRe4Sorcerer_create_8c0c8b80(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x4b8);
 if(object) TObjEneRe4Sorcerer_ctor_8c0c8c08(object,*(void **)0x8c44be94,argument);
 return object;
}
