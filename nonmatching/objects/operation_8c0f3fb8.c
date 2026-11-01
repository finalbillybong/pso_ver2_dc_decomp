/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f3fb8
 * function: operation_8c0f3fb8
 * language: c
 * reference size: 248 bytes
 * compiled size: 244 bytes (-1.6%)
 * differing lines: 32 of 91 reference instruction lines
 * differing bytes: 197
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    int f04;
} Block_frame_0;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    unsigned short fe8;
    char unknownea[0x1a];
    float f104;
    char unknown108[0x8];
    Arg0_110 *f110;
    char unknown114[0x18];
    float f12c;
};
struct Arg0_dc {
    char unknown0[0x4];
    float f04;
    char unknown8[0x10];
    int f18;
    char unknown1c[0x14];
    float f30;
    float f34;
    char unknown38[0xc];
    int f44;
};
struct Frame {
    Block_frame_0 f00;
};
extern Block8 g_8c309ecc;
extern int lookup_object_by_id(unsigned short);
extern void transform_actor_records(void *);
extern void operation_8c05237c(void *);
extern void operation_8c0d2148(int);
extern int operation_8c05bbf8(void);
extern void call_8c0f363c(Object *, Frame *, void *);
extern void operation_8c0d2188(int);
int operation_8c0f3fb8(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    t1 = lookup_object_by_id((unsigned short)(o->fe8));
    o->fdc->f04 = o->f104;
    o->fdc->f30 = o->f104;
    o->fdc->f34 = o->f12c * 3.0f * 1.8f;
    transform_actor_records((void *)o);
    operation_8c05237c((void *)o);
    if ((((o->fdc->f18 | o->fdc->f44) & 0x400000)) != 0) {
        return 1;
    }
    if (t1 != 0) {
        operation_8c0d2148(t1);
    }
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c309ecc;
    t2 = operation_8c05bbf8();
    if (t2 != 0) {
        (&frame)->f00.f04 &= -3;
    }
    call_8c0f363c(o, (Frame *)((&frame)), (void *)(o->f110));
    if (t1 != 0) {
        operation_8c0d2188(t1);
    }
    return 0;
}
