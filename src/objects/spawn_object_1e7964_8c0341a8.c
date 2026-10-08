#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c2596d8)
void *spawn_object_1e7964_8c0341a8(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x1b0);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
