#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOTrapAncient01_ctor_8c14120c ((void (*)(void *,void *,void *))0x8c14120c)
void *TOTrapAncient01_create_8c141594(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x390);
 if(object) TOTrapAncient01_ctor_8c14120c(object,*(void **)0x8c44be98,argument);
 return object;
}
