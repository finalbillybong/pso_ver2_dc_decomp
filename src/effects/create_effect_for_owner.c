#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
#define lookup_at ((void *(*)(unsigned int))0x8c021ef8)
extern void *initialize_at(void *,void *,void *,void *,int);
void create_effect_for_owner(unsigned short id) {
 char *owner=lookup_at(id);
 if(owner) {
  void *effect=allocate_at(*(void **)0x8c4d97e0,300);
  if(effect)initialize_at(effect,owner,owner+60,owner+804,0);
 }
}
