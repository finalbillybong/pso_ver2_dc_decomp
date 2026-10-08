typedef struct View { char unknown0[20]; struct View *child; char unknown24[48]; float position; } View;
typedef char check_child[(unsigned long)&((View *)0)->child==20?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==72?1:-1];
typedef char check_prefix[sizeof(View)==76?1:-1];
extern void reparent_at(View *,void *);
void transfer_lowered_children(View *parent) {
 View *child;
 while((child=parent->child)!=0) {
  child->position+=-5.0f;
  reparent_at(child,*(void **)0x8c4dbb60);
 }
}
