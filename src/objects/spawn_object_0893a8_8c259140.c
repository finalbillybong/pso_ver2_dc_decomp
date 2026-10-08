#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c259184)
void *spawn_object_0893a8_8c259140(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x160);
 if(object) initialize_at(object,*(void **)0x8c44bea0,argument);
 return object;
}
