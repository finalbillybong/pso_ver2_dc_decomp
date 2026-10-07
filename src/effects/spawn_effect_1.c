/* Provisional spawn wrapper: allocate observed size and forward narrow arguments. */
#define allocate_at ((void *(*)(void *,int))0x8c122700)
extern void initialize_at(void *,void *,void *,void *,int,unsigned short);
void *spawn_effect_1(void *resource,void *position,void *owner,int flags,unsigned short binding) {
 void *p=allocate_at(*(void **)0x8c4d97e4,0xb4);
 if(p) initialize_at(p,resource,position,owner,flags,binding);
 return p;
}
