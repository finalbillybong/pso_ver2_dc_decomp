#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define lookup_at ((void *(*)(unsigned int))0x8c021ef8)
extern void *initialize_at(void *,void *,void *,void *,int);
void create_effect_at_position(unsigned short id,void *position) {
 void *owner=lookup_at(id);
 if(owner) {
  void *effect=allocate_at(*(void **)0x8c4d97e0,300);
  if(effect)initialize_at(effect,owner,position,position,10);
 }
}
