#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjEneDf2Bringer_ctor_8c0f48e4 ((void (*)(void *,void *,void *))0x8c0f48e4)
void *TObjEneDf2Bringer_create_8c0f4820(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x490);
 if(object) TObjEneDf2Bringer_ctor_8c0f48e4(object,*(void **)0x8c44be94,argument);
 return object;
}
