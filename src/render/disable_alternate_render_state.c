extern void mask_at(unsigned int,int);
void disable_alternate_render_state(void) {
 *(unsigned int *)0x8c575570&=0xfffff7ff;
 mask_at(0xff00,0);
}
