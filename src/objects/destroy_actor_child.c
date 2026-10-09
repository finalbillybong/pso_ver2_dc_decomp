typedef struct Child { void *name; unsigned short flags; } Child;
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[8]; Child *child; } View;
typedef char check_flags[(unsigned long)&((Child *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==36?1:-1];
extern void *expected_name,*heap;
extern void base_at(View *,int);
extern void free_at(void *,void *);
static inline int valid(Child *child) { return child->name==expected_name; }
View *destroy_actor_child(View *o,short release) {
 if(o) {
  o->dispatch=(void *)0x8c261960;

 if(o) {
  Child *child;
  o->dispatch=(void *)0x8c26197c;
  if(o->child) { if(valid(o->child)==0) o->child=0; }
  child=o->child;
  if(child) child->flags|=1;
  base_at(o,0);
 }

  if(release>0) free_at(heap,o);
 }
 return o;
}
