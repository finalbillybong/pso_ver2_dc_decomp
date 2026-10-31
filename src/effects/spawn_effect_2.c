/* Provisional spawn wrapper: allocate observed size and forward narrow arguments. */
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
extern void initialize_at(void *,void *,void *,void *,int,unsigned short);
void *spawn_effect_2(void *resource,void *position,void *owner,int flags,unsigned short binding) {
 void *p=heap_alloc_8c122700(*(void **)0x8c4d97e4,0xa0);
 if(p) initialize_at(p,resource,position,owner,flags,binding);
 return p;
}
