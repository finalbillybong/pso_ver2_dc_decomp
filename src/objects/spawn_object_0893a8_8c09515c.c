#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c0951a0)
void *TObjEneMe1CanadinLeader_create_8c09515c(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x514);
 if(object) initialize_at(object,*(void **)0x8c44be94,argument);
 return object;
}
