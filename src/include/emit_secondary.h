#ifndef PSO_EMIT_SECONDARY_H
#define PSO_EMIT_SECONDARY_H
/* Provisional second table: 8c05ff3c observes a 28-byte row and flags at 24.
 * The preceding 24 bytes have no assigned meaning here.
 */
typedef struct EmitSecondary {
    unsigned char unknown_00[24];
    unsigned int flags;
} EmitSecondary;
#define EMIT_SECONDARY_OFFSET(t, f) ((unsigned long)&((t *)0)->f)
typedef char check_emit_secondary_size[sizeof(EmitSecondary) == 28 ? 1 : -1];
typedef char check_emit_secondary_flags[EMIT_SECONDARY_OFFSET(EmitSecondary, flags) == 24 ? 1 : -1];
#endif
