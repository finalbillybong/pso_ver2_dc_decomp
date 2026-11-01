#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjMapCsn_ctor_8c1a129c ((void (*)(void *,void *,void *))0x8c1a129c)
void *TObjMapCsn_create_8c1a1400(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x324);
 if(object) TObjMapCsn_ctor_8c1a129c(object,*(void **)0x8c4dc5e0,argument);
 return object;
}
