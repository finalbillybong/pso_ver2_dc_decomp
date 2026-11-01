#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjRoomId_ctor_8c1853d8 ((void (*)(void *,void *,void *))0x8c1853d8)
void *TObjRoomId_create_8c185394(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0xa0);
 if(object) TObjRoomId_ctor_8c1853d8(object,*(void **)0x8c44be98,argument);
 return object;
}
