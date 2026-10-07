/* Provisional setup names. Preserve the bounded poll, its postincrement and the last state written by the callee; the reference does not initialize state. */
#define begin_at ((void (*)(int))0x8c379038)
#define poll_at ((int (*)(int *))0x8c37908a)
#define apply_at ((void (*)(int))0x8c34609c)
#define finish_at ((void (*)(void))0x8c37904a)
#define reset_at ((void (*)(void))0x8c060354)
void emission_setup_6020c(void) {
 int state; int i; register int limit;
 begin_at(*(int *)0x8c41cb60);
 { limit=65535; i=0;
 while(poll_at(&state)) { if(i++>limit) break; }
 }
 if(state==0) { *(unsigned char *)0x8c2fc700=1; apply_at(1); }
 else { *(unsigned char *)0x8c2fc700=0; apply_at(0); }
 finish_at(); reset_at();
}
