#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c1323dc)
void *spawn_object_0893a8_8c1326c4(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x124);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
