#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c11434c)
void *TOKeyAncient01_create_8c114610(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x11c);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
