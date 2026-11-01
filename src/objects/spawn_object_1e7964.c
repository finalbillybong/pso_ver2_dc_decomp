#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjWarpBoss_ctor_8c1e7964 ((void (*)(void *,void *,void *))0x8c1e7964)
void *TObjWarpBoss_create_8c034054(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x1b0);
 if(object) TObjWarpBoss_ctor_8c1e7964(object,*(void **)0x8c44be98,argument);
 return object;
}
