typedef struct View { char unknown0[24]; void *dispatch; char unknown28[4]; unsigned short identifier; char unknown34[2]; int ticks; } View;
typedef struct Actor { char unknown0[804]; char resource; } Actor;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==32?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==36?1:-1];
typedef char check_resource[(unsigned long)&((Actor *)0)->resource==804?1:-1];
extern void base_at(View *,void *);
extern Actor *lookup_at(unsigned int);
extern void *find_at(void *,int,int);
extern void set_at(void *,unsigned short);
View *initialize_timed_actor_child(View *o,void *parent,unsigned short identifier) {
 View **home=&o; Actor *actor;
 base_at(o,parent);
 o->dispatch=(void *)0x8c261944;
 o->identifier=identifier;
 o->ticks=10;
 actor=lookup_at(o->identifier);
 if(actor) { void *child=find_at(&actor->resource,35,16); if(child) set_at(child,o->identifier); }
 return o;
}
