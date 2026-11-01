#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjCityMainWarpChallenge_ctor_8c2596d8 ((void (*)(void *,void *,void *))0x8c2596d8)
void *TObjCityMainWarpChallenge_create_8c0341a8(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x1b0);
 if(object) TObjCityMainWarpChallenge_ctor_8c2596d8(object,*(void **)0x8c44be98,argument);
 return object;
}
