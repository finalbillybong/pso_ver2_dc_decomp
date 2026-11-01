#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define TObjCollision_ctor_8c0102e4 ((void (*)(void *,void *,void *))0x8c0102e4)
void *TObjCollision_create_8c0104a0(void *argument) {
 void *object=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x110);
 if(object) TObjCollision_ctor_8c0102e4(object,*(void **)0x8c44be9c,argument);
 return object;
}
