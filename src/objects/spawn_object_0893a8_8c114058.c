#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOKeyAncient02_ctor_8c113dfc ((void (*)(void *,void *,void *))0x8c113dfc)
void *TOKeyAncient02_create_8c114058(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x124);
 if(object) TOKeyAncient02_ctor_8c113dfc(object,*(void **)0x8c44be98,argument);
 return object;
}
