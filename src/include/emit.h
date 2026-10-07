#ifndef PSO_EMIT_H
#define PSO_EMIT_H
/* Provisional table layout inferred from 8c05fbf8; field meanings unconfirmed. */
typedef struct EmitSlot {
    unsigned int flags, kind;
    void *position;
    int counter, field_10, argument, field_18;
    signed char field_1c;
    unsigned char unknown_1d[3];
} EmitSlot;

#define EMIT_OFFSET(t, f) ((unsigned long)&((t *)0)->f)
typedef char check_emit_slot_size[sizeof(EmitSlot) == 0x20 ? 1 : -1];
typedef char check_emit_flags[EMIT_OFFSET(EmitSlot, flags) == 0 ? 1 : -1];
typedef char check_emit_kind[EMIT_OFFSET(EmitSlot, kind) == 4 ? 1 : -1];
typedef char check_emit_position[EMIT_OFFSET(EmitSlot, position) == 8 ? 1 : -1];
typedef char check_emit_counter[EMIT_OFFSET(EmitSlot, counter) == 12 ? 1 : -1];
typedef char check_emit_field_10[EMIT_OFFSET(EmitSlot, field_10) == 16 ? 1 : -1];
typedef char check_emit_argument[EMIT_OFFSET(EmitSlot, argument) == 20 ? 1 : -1];
typedef char check_emit_field_18[EMIT_OFFSET(EmitSlot, field_18) == 24 ? 1 : -1];
typedef char check_emit_field_1c[EMIT_OFFSET(EmitSlot, field_1c) == 28 ? 1 : -1];
#endif
