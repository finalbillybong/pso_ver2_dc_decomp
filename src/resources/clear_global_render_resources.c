extern int state_a,state_b,state_c;
extern void release_at(void *);
void clear_global_render_resources(void) {
 int index;
 for(index=0;index<2;index++) {
  unsigned int offset=(unsigned int)index<<2;
  release_at(*(void **)((char *)0x8c4d51d4+offset));
  *(float *)((char *)0x8c4d5280+offset)=0.0f;
 }
 state_a=0;
 state_b=0;
 state_c=0;
}
