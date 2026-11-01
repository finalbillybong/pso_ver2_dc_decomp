#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define lookup_at ((void *(*)(unsigned int))0x8c021ef8)
extern void *TTecLuker_ctor_8c0b3df8(void *,void *,void *,void *,int);
void *TTecLuker_create_8c0b44f4(void *a,void *b,void *c,int d) {
 void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,300);
 if(effect)effect=TTecLuker_ctor_8c0b3df8(effect,a,b,c,d);
 return effect;
}
