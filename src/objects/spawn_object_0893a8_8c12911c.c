#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c128f48)
void *spawn_object_0893a8_8c12911c(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x38c);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
