#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c057c80)
void *spawn_object_0893a8_8c057c00(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x4a4);
 if(object) initialize_at(object,*(void **)0x8c44be94,argument);
 return object;
}
