typedef struct View { char unknown0[32]; short identifier; char unknown34[742]; short mode; char unknown778[70]; unsigned int flags; } View;
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==32?1:-1];
typedef char check_mode[(unsigned long)&((View *)0)->mode==776?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==848?1:-1];
extern void *heap,*parent;
extern void *allocate_at(void *,unsigned int);
extern void *construct_at(void *,void *,short);
static inline int flagged(View *o) { return (o->flags&0x40000)!=0; }
static inline int mode_is(View *o,int mode) { return o->mode==mode; }
void spawn_actor_child_if_allowed(View *o) {
 if(flagged(o)!=0 || mode_is(o,3)!=0 || mode_is(o,6)!=0) o->flags&=~0x40000u;
 else { void *child=allocate_at(heap,40);if(child) construct_at(child,parent,o->identifier); }
}
