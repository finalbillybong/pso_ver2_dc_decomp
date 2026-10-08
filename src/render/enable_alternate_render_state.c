extern void mask_at(unsigned int,int);
void enable_alternate_render_state(void) {
 *(unsigned int *)0x8c575570|=0x800;
 mask_at(0xfffffdff,0);
}
