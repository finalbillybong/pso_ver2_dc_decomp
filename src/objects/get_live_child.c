typedef struct Child { void *name; unsigned short flags; } Child;
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[8]; Child *child; } View;
typedef char check_flags[(unsigned long)&((Child *)0)->flags==4?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==36?1:-1];
extern void *expected_name;
static inline int valid(Child *child) { return child->name==expected_name; }
Child *get_live_child(View *o) {
 if(o->child) { if(valid(o->child)==0) o->child=0; }
 return o->child;
}
