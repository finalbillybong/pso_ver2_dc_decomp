#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjWarpBoss03_ctor_8c220664 ((void (*)(void *,void *,void *))0x8c220664)
void *TObjWarpBoss03_create_8c034374(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xf4);
 if(object) TObjWarpBoss03_ctor_8c220664(object,*(void **)0x8c44be98,argument);
 return object;
}
