#include "src/include/emit.h"
/* Provisional names: clear 54 rows after the observed optional reset calls.
 * Retain each row's flag bit 0, then clear its counter and position.
 */
extern unsigned char emit_slots[];
#define emit_enabled ((int *)0x8c4687f8)
#define reset_handles_a_at ((void (*)(void))0x8c345994)
#define reset_handles_b_at ((void (*)(void))0x8c3453c8)

void clear_emit_slots(void)
{
    int i;
    if (*emit_enabled) {
        reset_handles_a_at();
        reset_handles_b_at();
    }
    for (i = 0; i < 54; i++) {
        int offset = i << 5;
        *(unsigned int *)(emit_slots + offset) &= 1;
        {
            register unsigned char *counter_base = emit_slots + 12;
            *(int *)(counter_base + offset) = 0;
        }
        {
            register unsigned char *position_base = emit_slots + 8;
            *(void **)(position_base + offset) = 0;
        }
    }
}
