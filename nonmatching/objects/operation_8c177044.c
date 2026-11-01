/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c177044
 * function: operation_8c177044
 * language: c
 * reference size: 392 bytes
 * compiled size: 392 bytes (+0.0%)
 * differing lines: 8 of 155 reference instruction lines
 * differing bytes: 7
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c4dab04 S_g8c4dab04;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_110 Arg0_110;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x14];
    int f68;
    char unknown6c[0x98];
    Arg0_104 *f104;
    int f108;
    Arg0_10c *f10c;
    Arg0_110 *f110;
};
struct Frame {
    Vector3 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_g8c4dab04 {
    float f00;
    float f04;
};
extern S_g8c4dab04 *g_8c4dab04;
extern S_c8c021ef8 *lookup_low_id(int);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern void scale_vector_to_length(void *, float);
extern void call_8c3bdf60(void *, Frame *);
extern void call_8c0c510c(void *, void *, void *);
extern void call_8c0a7608(void *, void *);
extern void set_effect_words(void *, void *);
extern int operation_8c011214(int, int, int);
extern int operation_8c1771d0(Object *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c177044(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)(o->f104));
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f324;
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&o->f3c));
        scale_vector_to_length((void *)(&frame), g_8c4dab04->f04);
        call_8c3bdf60((void *)(((char *)o + 0xec)), (Frame *)((&frame)));
        scale_vector_to_length((void *)(((char *)o + 0xec)), g_8c4dab04->f00);
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    call_8c3bdf60((void *)(&o->f3c), (Frame *)(((char *)o + 0xec)));
    call_8c0c510c((void *)(((char *)o + 0xec)), (void *)(((char *)o + 0x64)), (void *)(&o->f68));
    o->f68 -= 0x4000;
    if (o->f10c != 0) {
        call_8c0a7608((void *)(o->f10c), (void *)(&o->f3c));
        set_effect_words((void *)(o->f10c), (void *)(((char *)o + 0x60)));
    }
    if (o->f110 != 0) {
        call_8c0a7608((void *)(o->f110), (void *)(&o->f3c));
        set_effect_words((void *)(o->f110), (void *)(((char *)o + 0x60)));
    }
    t2 = operation_8c011214((int)(&o->f48), (int)(&o->f3c), -1);
    if (t2 != 0) {
        o->f04 |= 1;
        return;
    }
    if (25.0f > o->f3c.f04) {
        t3 = operation_8c1771d0(o);
        if (t3 != 0) {
            o->f04 |= 1;
        }
    }
    if (!(--o->f108 > 0)) {
        o->f04 |= 1;
        return;
    }
    call_8c05fd7c(0x3001d, o, (void *)(&o->f3c), 0, 0);
}
