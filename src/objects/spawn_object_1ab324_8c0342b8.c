#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c1c43f4)
void *spawn_object_1ab324_8c0342b8(void *argument) {
 void *object=allocate_at(*(void **)0x8c4d97e0,0x9c);
 if(object) initialize_at(object,*(void **)0x8c44be98,argument);
 return object;
}
