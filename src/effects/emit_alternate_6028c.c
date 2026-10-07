/* Set the observed alternate-next flag, then forward four arguments plus a zero fifth argument. Names remain provisional. */
extern int emit_or_update_at(unsigned int,int,void *,int,unsigned int);
int emit_alternate_6028c(unsigned int kind,int reuse,void *position,int argument) {
 *(int *)0x8c4687fc=1;
 return emit_or_update_at(kind,reuse,position,argument,0);
}
