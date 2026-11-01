#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TOSensorAncient01_ctor_8c15cb78 ((void (*)(void *,void *,void *))0x8c15cb78)
void *TOSensorAncient01_create_8c15ce68(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x12c);
 if(object) TOSensorAncient01_ctor_8c15cb78(object,*(void **)0x8c44be98,argument);
 return object;
}
