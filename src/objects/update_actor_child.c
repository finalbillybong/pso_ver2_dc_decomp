#include "src/include/vector3.h"
typedef struct Child { void *name; } Child;
typedef struct View { char unknown0[4]; unsigned short flags; char unknown6[26]; unsigned short identifier; char unknown34[2]; Child *child; } View;
typedef struct Actor { char unknown0[784]; unsigned int flags; char unknown788[16]; Vector3 position; } Actor;
typedef char check_flags[(unsigned long)&((View *)0)->flags==4?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==32?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==36?1:-1];
typedef char check_actor_flags[(unsigned long)&((Actor *)0)->flags==784?1:-1];
typedef char check_actor_position[(unsigned long)&((Actor *)0)->position==804?1:-1];
extern Actor *lookup_at(unsigned int);
extern int active_at(void),matches_at(const Actor *);
extern void move_at(Child *,const Vector3 *);
extern void *expected_name;
static inline int flagged(const Actor *a) { return (a->flags&0x8000)!=0; }
static inline int valid(Child *child) { return child->name==expected_name; }
void update_actor_child(View *o) {
 Actor *actor=lookup_at(o->identifier);
 if(actor && flagged(actor)!=0 && active_at() && matches_at(actor)) {
  Child *child;
  if(o->child) { if(valid(o->child)==0) o->child=0; }
  child=o->child;
  if(child) move_at(child,&actor->position);
 } else o->flags|=1;
}
