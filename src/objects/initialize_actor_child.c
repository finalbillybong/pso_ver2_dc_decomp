typedef struct View { char unknown0[4]; unsigned short flags; char unknown6[18]; void *dispatch; char unknown28[4]; unsigned short identifier; char unknown34[2]; void *child; } View;
typedef struct Actor { char unknown0[804]; char resource; } Actor;
typedef char check_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==32?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==36?1:-1];
typedef char check_resource[(unsigned long)&((Actor *)0)->resource==804?1:-1];
extern void base_at(View *,void *);
extern Actor *lookup_at(unsigned int);
extern void *find_at(void *,int);
View *initialize_actor_child(View *o,void *parent,unsigned short identifier) {
 View **home=&o;
 Actor *actor;
 { View *current=o;
   base_at(current,parent);
   current->dispatch=(void *)0x8c26197c;
   current->identifier=65535;
   current->child=0;
 }
 o->dispatch=(void *)0x8c261960;
 o->identifier=identifier;
 actor=lookup_at(o->identifier);
 if(actor) {
  void *child=find_at(&actor->resource,175);
  if(child) o->child=child;
  else { o->flags|=1;return o; }
 }
 return o;
}
