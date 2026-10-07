/* Provisional control reset: forward two and three zero arguments, then set the observed global state to one. */
#define reset_a_at ((void (*)(int,int))0x8c346010)
#define reset_b_at ((void (*)(int,int,int))0x8c345f8c)
void reset_emit_control(void) {
 reset_a_at(0,0); reset_b_at(0,0,0); *(int *)0x8c468838=1;
}
