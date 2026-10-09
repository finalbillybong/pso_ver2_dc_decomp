typedef struct View { char unknown0[4]; unsigned short flags; char unknown6[26]; unsigned short identifier; char unknown34[2]; int ticks; } View;
typedef struct Actor { char unknown0[804]; char resource; } Actor;
typedef char check_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==32?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==36?1:-1];
typedef char check_resource[(unsigned long)&((Actor *)0)->resource==804?1:-1];
extern Actor *lookup_at(unsigned int);extern void *find_at(void *,int,int);extern void set_at(void *,unsigned short);
void update_timed_actor_child(View *o) {
 if(--o->ticks<0) {
  Actor *actor=lookup_at(o->identifier);
  if(actor) { void *child=find_at(&actor->resource,32,16);if(child) set_at(child,o->identifier); }
  o->flags|=1;
 }
}
