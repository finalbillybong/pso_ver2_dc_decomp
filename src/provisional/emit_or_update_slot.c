/* Unresolved: 448 bytes, four differing bytes at 0x8c05feba/0x8c05fec0. */
/* Provisional reconstruction of adjacent emission/reuse entry.
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

#define alternate_next ((int *)0x8c4687fc)
int emit_or_update_slot(unsigned int kind, int incoming_reuse, void *position, int argument, unsigned int flags)
{
    int reuse;
    int offset, slot;
    register int handle_offset;
    register int *last=emit_last;
    int enabled=*emit_enabled;
    *last=-1;
    if (!enabled) return -1;
    if (kind==0x000f0000) return -1;
    reuse=incoming_reuse;
    slot=-1;
    if (reuse) {
        int i;
        register unsigned int mask=0x400;
        for(i=0;i<54;i++) {
            int scan_offset=i<<5;
            register unsigned char *kind_base=emit_slots+4;
            if ((*(unsigned int *)(emit_slots+scan_offset)&mask) && *(unsigned int *)(kind_base+scan_offset)==kind) {
                slot=i;
                break;
            }
        }
    }
    if (slot>=0) {
        int at=slot<<5;
        { register unsigned char *base=emit_slots+8; *(void **)(base+at)=position; }
        { register unsigned char *base=emit_slots+20; *(int *)(base+at)=argument; }
        { register unsigned char *base=emit_slots+12; *(int *)(base+at)=5; }
        if (!position) prepare_slot_at(slot,1);
        *emit_last=slot;
        return slot;
    }
    slot=choose_slot_at();
    *emit_last=slot;
    if (slot>=0) {
    offset=slot<<5;
    *(unsigned int *)(emit_slots+offset)&=1;
    if (flags&1) *(unsigned int *)(emit_slots+offset)|=0x2000;
    { register unsigned char *base=emit_slots+8; *(void **)(base+offset)=position; }
    { register unsigned char *base=emit_slots+20; *(int *)(base+offset)=argument; }
    if (prepare_slot_at(slot,0)==1) {
        { register unsigned char *base=emit_slots+4; *(unsigned int *)(base+offset)=kind; }
        { register unsigned char *base=emit_slots+16; *(int *)(base+offset)=reuse; }
        { register unsigned char *base=emit_slots+12; *(int *)(base+offset)=5; }
        handle_offset=slot<<2;
        handle_reset_at(*(void **)(emit_handles+handle_offset));
        { register unsigned char *base=emit_slots+24;
          handle_field_at(*(void **)(emit_handles+handle_offset),*(int *)(base+offset),0); }
        { register unsigned char *base=emit_slots+28;
          handle_byte_at(*(void **)(emit_handles+handle_offset),*(signed char *)(base+offset),0); }
        handle_start_at(*(void **)(emit_handles+handle_offset),(int)kind>>16,kind&0xffff,0);
        *(unsigned int *)(emit_slots+offset)|=0x1600;
        if (*alternate_next) {
            *(unsigned int *)(emit_slots+offset)|=0x800;
            *alternate_next=0;
        }
    } else return -1;
    }
    return slot;
}
