#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c1a9c84)
void *spawn_object_1a9c84(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0xa4);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
