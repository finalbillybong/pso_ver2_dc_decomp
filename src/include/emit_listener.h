#ifndef PSO_EMIT_LISTENER_H
#define PSO_EMIT_LISTENER_H
/* Provisional view of the pointer read at 0x8c46ee80 by 0x8c05ff94.
 * Only observed field offsets are named; this is not a complete object type.
 */
typedef struct EmitListener {
    unsigned char unknown_00[0x90];
    float x, y, z;
    unsigned char unknown_9c[0x10];
    int angle;
} EmitListener;
#define EMIT_LISTENER_OFFSET(t, f) ((unsigned long)&((t *)0)->f)
typedef char check_emit_listener_x[EMIT_LISTENER_OFFSET(EmitListener, x) == 0x90 ? 1 : -1];
typedef char check_emit_listener_z[EMIT_LISTENER_OFFSET(EmitListener, z) == 0x98 ? 1 : -1];
typedef char check_emit_listener_angle[EMIT_LISTENER_OFFSET(EmitListener, angle) == 0xac ? 1 : -1];
#endif
