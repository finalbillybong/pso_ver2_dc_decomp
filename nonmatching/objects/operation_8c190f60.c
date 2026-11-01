/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c190f60
 * function: operation_8c190f60
 * language: c
 * reference size: 476 bytes
 * compiled size: 476 bytes (+0.0%)
 * differing lines: 8 of 183 reference instruction lines
 * differing bytes: 8
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
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_310 S_g8c467180_2c_310;
typedef struct S_g8c467180_2c_318 S_g8c467180_2c_318;
typedef struct S_g8c467180_2c_31c S_g8c467180_2c_31c;
typedef struct S_g8c467180_2c_324 S_g8c467180_2c_324;
typedef struct S_g8c467180_2c_328 S_g8c467180_2c_328;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Frame {
    char unknown0[0x14];
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1f4];
    int f1f4;
    char unknown1f8[0x118];
    S_g8c467180_2c_310 *f310;
    char unknown314[0x4];
    S_g8c467180_2c_318 *f318;
    S_g8c467180_2c_31c *f31c;
    char unknown320[0x4];
    S_g8c467180_2c_324 *f324;
    S_g8c467180_2c_328 *f328;
};
struct S_c8c0744dc {
    char unknown0[0xec];
    int fec;
    char unknownf0[0xf0];
    float f1e0;
};
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void initialize_fields_8c207358(void *);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void call_8c156d48(S_c8c156bd8 *, void *, int, int, int);
extern void operation_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void call_8c1c8ce4(void *, void *);
extern int call_8c207378(void *, int);
extern int lookup_low_id(int);
extern int operation_8c074560(S_c8c0744dc *, int, Frame *);
extern void operation_8c15700c(S_c8c156bd8 *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c190f60(Object *o, int a1)
{
    Frame frame;
    S_c8c156bd8 *t2;
    S_c8c0744dc *t1;
    int t3;
    int t4;
    int t5;
    initialize_fields_8c207358((void *)(((char *)(&frame) + 0x2)));
    t1 = find_record_8c0744dc(a1);
    t2 = operation_8c156bd8((int)((void *)0x8c2876e0), 5, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f1f4));
    if (!(2.0f > t1->f1e0)) {
        call_8c156d48(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f328), 0x16, 1, -0x979798);
    } else {
        operation_8c156d30(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f328), 6, 1);
    }
    call_8c1c8ce4((void *)(o->f2c), (void *)(((char *)(&frame) + 0x2)));
    t3 = call_8c207378((void *)(((char *)(&frame) + 0x2)), 0);
    if (t3 != -1) {
        operation_8c156d30(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f324), 6, 0);
    } else {
        call_8c156d48(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f324), 0x16, 0, -0x979798);
    }
    if (((t1->fec & 8)) != 0) {
        operation_8c156d30(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f318), 6, 3);
    } else {
        t4 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t4 != 0) {
            t5 = operation_8c074560(t1, t4, (Frame *)((&frame)));
            if (t5 != 0) {
                operation_8c156d30(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f31c), 6, 2);
            } else {
                call_8c156d48(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f31c), 0x16, 2, -0x7f7f80);
            }
        }
    }
    operation_8c156d30(t2, (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f310), 6, 4);
    t2->f80 = (t2->f80 & 0xffff) | 0x10;
    operation_8c15700c(t2, 182.0f);
    operation_8c157138((void *)t2);
    return t2;
}
