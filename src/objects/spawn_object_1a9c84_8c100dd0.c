#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c100b4c)
void *TObjEnvSound_create_8c100dd0(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xa4);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
