#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c11434c)
void *spawn_object_0893a8_8c114610(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x11c);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
