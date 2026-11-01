#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
#define lookup_at ((void *(*)(unsigned int))0x8c021ef8)
extern void *TTecLuker_ctor_8c0b3df8(void *,void *,void *,void *,int);
void create_effect_at_position(unsigned short id,void *position) {
 void *owner=lookup_at(id);
 if(owner) {
  void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,300);
  if(effect)TTecLuker_ctor_8c0b3df8(effect,owner,position,position,10);
 }
}
