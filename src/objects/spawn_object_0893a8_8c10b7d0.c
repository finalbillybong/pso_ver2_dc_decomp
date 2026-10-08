#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c10b574)
void *spawn_object_0893a8_8c10b7d0(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x10c);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
