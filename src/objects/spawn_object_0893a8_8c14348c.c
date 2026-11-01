#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TBoss2DeRolLe_ctor_8c143670 ((void (*)(void *,void *,void *))0x8c143670)
void *TBoss2DeRolLe_create_8c14348c(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x77c);
 if(object) TBoss2DeRolLe_ctor_8c143670(object,*(void **)0x8c44be94,argument);
 return object;
}
