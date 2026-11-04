/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f3ba8
 * function: TObjEneRe7BeruraPunch_update_8c0f3ba8
 * language: c
 * reference size: 508 bytes
 * compiled size: 512 bytes (+0.8%)
 * differing lines: 150 of 203 reference instruction lines
 * differing bytes: 294
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjEneRe7BeruraPunch.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x5e];
    Arg0_64 *f64;
    char unknown68[0x80];
    unsigned short fe8;
    char unknownea[0x2];
    int fec;
    char unknownf0[0x18];
    Arg0_108 *f108;
    Arg0_10c *f10c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    int f0c;
    int f10;
    int f14;
};
extern int lookup_object_by_id(unsigned short);
extern int hierarchy_is_active(void *);
extern void call_8c0f40b0(Object *);
extern void operation_8c0f42a8(void *);
extern float njSin_8c37eb0c(void *);
extern float njCos_8c38c154(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void set_effect_bit0(void *);
extern void call_8c3bdf60(Frame *, void *);
extern void call_8c0a7608(void *, Frame *);
extern void set_effect_words(void *, void *);
void TObjEneRe7BeruraPunch_update_8c0f3ba8(Object *o)
{
    Frame frame;
    float v3;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    int t6;
    t1 = lookup_object_by_id((unsigned short)(o->fe8));
    if (t1 != 0) {
        t2 = hierarchy_is_active((void *)t1);
        if (t2 != 0) {
            goto L_8c0f3bd6;
        }
    }
    o->f04 |= 1;
    return;
L_8c0f3bd6:;
    switch (o->fec) {
    case 0:
        break;
    case 1:
        call_8c0f40b0(o);
        break;
    case 2:
        operation_8c0f42a8((void *)o);
    }
    switch (o->fec) {
    case 1:
        (&frame)->f0c = 0;
        (&frame)->f10 = (int)o->f64 + 0x4000;
        (&frame)->f14 = -0x4000;
        t4 = njSin_8c37eb0c((void *)(o->f64));
        t5 = njCos_8c38c154((void *)(o->f64));
        v3 = (float)-t5;
        if (o->f108 == 0) {
            t3 = create_effect_769c((void *)(((char *)o + 0x3c)), 0xdd);
            o->f108 = (Arg0_108 *)t3;
            if (o->f108 == 0) {
                goto L_8c0f3ca4;
            }
            set_effect_bits((void *)(o->f108), (unsigned short)2);
            set_effect_bit0((void *)(o->f108));
        } else {
            (&frame)->f00 = -t4 * 40.0f;
            (&frame)->f04 = 3.0f;
            (&frame)->f08 = -t5 * 40.0f;
            call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x114)));
            call_8c0a7608((void *)(o->f108), (Frame *)((&frame)));
            set_effect_words((void *)(o->f108), (void *)(&(&frame)->f0c));
        }
L_8c0f3ca4:;
        if (o->f10c == 0) {
            t6 = create_effect_769c((void *)(((char *)o + 0x3c)), 0x150);
            o->f10c = (Arg0_10c *)t6;
            if (o->f10c == 0) {
                return;
            }
            set_effect_bits((void *)(o->f10c), (unsigned short)2);
            set_effect_bit0((void *)(o->f10c));
            return;
        }
        (&frame)->f00 = -t4 * -20.0f;
        (&frame)->f04 = 5.0f;
        (&frame)->f08 = v3 * -20.0f;
        call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x114)));
        call_8c0a7608((void *)(o->f10c), (Frame *)((&frame)));
        set_effect_words((void *)(o->f10c), (void *)(&(&frame)->f0c));
        return;
    }
    if (o->f108 != 0) {
        set_effect_bit0((void *)(o->f108));
    }
    if (o->f10c != 0) {
        set_effect_bit0((void *)(o->f10c));
    }
}
