#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjFogCollision_ctor_8c13677c ((void (*)(void *,void *,void *))0x8c13677c)
void *TObjFogCollision_create_8c136738(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x9c);
 if(object) TObjFogCollision_ctor_8c13677c(object,*(void **)0x8c44be98,argument);
 return object;
}
