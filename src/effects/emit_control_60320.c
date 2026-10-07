/* Provisional handle control operation; the exact control meaning is not established. Preserve the signed slot bounds. */
#include "src/include/emit.h"
extern unsigned char emit_slots[];
extern unsigned char emit_handles[];
#define emit_enabled ((int *)0x8c4687f8)
#define handle_control_at ((void (*)(void *))0x8c3457b0)
void emit_control_60320(int slot) {
 if(*emit_enabled && slot>=0 && slot<54) handle_control_at(*(void **)(emit_handles+(slot<<2)));
}
