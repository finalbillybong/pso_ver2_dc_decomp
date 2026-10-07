#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c19d270)
void *spawn_object_19d270(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0xf4);
 if(object) initialize_at(object,*(void **)0x8c4dc4d4,argument);
 return object;
}
