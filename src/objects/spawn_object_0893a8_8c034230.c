#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjContainerAbeEnemy_ctor_8c085714 ((void (*)(void *,void *,void *))0x8c085714)
void *TObjContainerAbeEnemy_create_8c034230(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x384);
 if(object) TObjContainerAbeEnemy_ctor_8c085714(object,*(void **)0x8c44be98,argument);
 return object;
}
