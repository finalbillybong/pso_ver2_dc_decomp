#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjBoss2CeilJunk_ctor_8c164fd8 ((void (*)(void *,void *,void *))0x8c164fd8)
void *TObjBoss2CeilJunk_create_8c164f94(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xbc);
 if(object) TObjBoss2CeilJunk_ctor_8c164fd8(object,*(void **)0x8c44be98,argument);
 return object;
}
