/* 0x8c05ff3c: provisional name; full range ends at 0x8c05ff94.
 * Scan 54 rows, preserving the observed flag tests and their access order.
 */
#include "src/include/emit.h"
#include "src/include/emit_secondary.h"
extern unsigned char secondary_table[];
extern unsigned char emit_slots[];

int choose_emit_slot(void)
{
    int i;
    register unsigned int mask = 0x400;
    for (i = 0; i < 54; i++) {
        unsigned int flags = *(unsigned int *)(emit_slots + (i << 5));
        if ((flags & 1) && !(flags & mask)) {
            register unsigned char *secondary_flags =
                secondary_table + EMIT_SECONDARY_OFFSET(EmitSecondary, flags);
            if (!(*(unsigned int *)(secondary_flags + i * sizeof(EmitSecondary)) & 1))
                return i;
        }
    }
    return -1;
}
