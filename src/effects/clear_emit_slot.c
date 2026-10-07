/* Provisional slot stop/reset. Preserve the signed 0..53 guard and independently scoped field bases. */
#include "src/include/emit.h"
extern unsigned char emit_slots[];
extern unsigned char emit_handles[];
#define emit_enabled ((int *)0x8c4687f8)
#define handle_stop_at ((void (*)(void *))0x8c345918)
void clear_emit_slot(int slot) {
 if(*emit_enabled && slot>=0 && slot<54) {
  int offset;
  handle_stop_at(*(void **)(emit_handles+(slot<<2)));
  offset=slot<<5;
  *(unsigned int *)(emit_slots+offset)&=1;
  { register unsigned char *base=emit_slots+12; *(int *)(base+offset)=0; }
  { register unsigned char *base=emit_slots+8; *(void **)(base+offset)=0; }
 }
}
