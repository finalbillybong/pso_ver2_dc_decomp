/* Unresolved: complete 388-byte candidate, never integrated until exact.
 * Field and routine names remain provisional; the observed table has 54 slots.
 * Separate field bases preserve the reference indexed-addressing shape. */
#include "src/include/emit.h"
extern unsigned char emit_slots[];
#define emit_enabled ((int *)0x8c4687f8)
#define emit_last ((int *)0x8c2fc704)
extern unsigned char emit_handles[];
#define choose_slot_at ((int (*)(void))0x8c05ff3c)
/* Callee saves r5 at 8c05ff9a and tests it at 8c060078. */
#define prepare_slot_at ((int (*)(int, int))0x8c05ff94)
#define handle_reset_at ((void (*)(void *))0x8c345478)
#define handle_field_at ((void (*)(void *, int, int))0x8c345864)
/* Callee sign-extends its byte argument at 8c34571e. */
#define handle_byte_at ((void (*)(void *, signed char, int))0x8c3456fc)
#define handle_start_at ((int (*)(void *, int, int, int))0x8c3452e0)

int emit_5fbf8(unsigned int kind, void *position, int argument, unsigned int flags)
{
    int slot, offset;
    register int handle_offset;
    register int *last = emit_last;
    int enabled = *emit_enabled;
    *last = -1;
    if (!enabled) return -1;
    if (kind == 0x000f0000) return -1;
    slot = choose_slot_at();
    if (slot < 0) return -1;
    {
        register unsigned char *kind_base = emit_slots + 4;
        int i;
        register unsigned int mask = 0x400;
        register int threshold = 148;
        register unsigned char *counter_base = emit_slots + 12;
        for (i = 0; i < 54; i++) {
            int scan_offset = i << 5;
            if ((*(unsigned int *)(emit_slots + scan_offset) & mask) &&
                *(unsigned int *)(kind_base + scan_offset) == kind &&
                !(*(int *)(counter_base + scan_offset) < threshold)) return -1;
        }
    }
    offset = slot << 5;
    (*(unsigned int *)(emit_slots + 0 + offset)) &= 1;
    if (flags & 1) (*(unsigned int *)(emit_slots + 0 + offset)) |= 0x2000;
    {
        register unsigned char *base = emit_slots + 8;
        (*(void * *)(base + offset)) = position;
    }
    {
        register unsigned char *base = emit_slots + 12;
        (*(int *)(base + offset)) = 150;
    }
    {
        register unsigned char *base = emit_slots + 20;
        (*(int *)(base + offset)) = argument;
    }
    {
        register unsigned char *base = emit_slots + 4;
        (*(unsigned int *)(base + offset)) = kind;
    }
    {
        register unsigned char *base = emit_slots + 16;
        (*(int *)(base + offset)) = 0;
    }
    if (prepare_slot_at(slot, 0) == 1) {
        handle_offset = slot << 2;
        handle_reset_at((*(void **)(emit_handles + handle_offset)));
        {
            register unsigned char *base = emit_slots + 24;
            handle_field_at((*(void **)(emit_handles + handle_offset)),
                            (*(int *)(base + offset)), 0);
        }
        {
            register unsigned char *base = emit_slots + 28;
            register signed char byte = *(signed char *)(base + offset);
            handle_byte_at((*(void **)(emit_handles + handle_offset)), byte, 0);
        }
        if (handle_start_at((*(void **)(emit_handles + handle_offset)), ((int)kind >> 16), kind & 0xffff, 0) == 0) {
            (*(unsigned int *)(emit_slots + 0 + offset)) |= 0x600;
            *emit_last = slot;
            return slot;
        }
    }
    return -1;
}
