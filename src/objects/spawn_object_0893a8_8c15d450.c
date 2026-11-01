#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOSensorGeneral01_ctor_8c15d230 ((void (*)(void *,void *,void *))0x8c15d230)
void *TOSensorGeneral01_create_8c15d450(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x128);
 if(object) TOSensorGeneral01_ctor_8c15d230(object,*(void **)0x8c44be98,argument);
 return object;
}
