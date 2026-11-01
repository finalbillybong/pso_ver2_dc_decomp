/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b7450
 * function: TTecRaBarta_update_8c0b7450
 * language: c
 * reference size: 340 bytes
 * compiled size: 340 bytes (+0.0%)
 * differing lines: 2 of 141 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0a777c S_c8c0a777c;
typedef struct Frame Frame;
typedef struct S_g8c2856a0 S_g8c2856a0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_6c Arg0_6c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    char unknown24[0x48];
    Arg0_6c *f6c;
    char unknown70[0xe];
    short f7e;
    int f80;
    Vector3 f84;
    char unknown90[0x38];
    int fc8;
    char unknowncc[0x4];
    unsigned short fd0;
    char unknownd2[0x32];
    int f104;
    char unknown108[0x4];
    int f10c;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_20 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_c8c0a777c {
    char unknown0[0x44];
    float f44;
    float f48;
};
extern int lookup_object_by_id(unsigned short);
extern int call_8c18e8a0(void *, int);
extern S_c8c0a777c *create_effect_777c(void *, int);
extern void operation_8c0ada54(void *);
void TTecRaBarta_update_8c0b7450(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    S_c8c0a777c *t3;
    if (o->f104 == 0) {
        o->f04 |= 1;
        return;
    }
    t1 = lookup_object_by_id((unsigned short)(o->fd0));
    o->f20 = (Arg0_20 *)t1;
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    o->f6c = (Arg0_6c *)((int)o->f6c + 1);
    t2 = call_8c18e8a0((void *)(o->f6c), 3);
    if (t2 == 0) {
        if (o->f10c == 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f20->f3c;
        } else {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f84;
        }
        (&frame)->f00.f04 += 5.0f;
        t3 = create_effect_777c((void *)(&frame), (int)(*(S_g8c2856a0 **)((char *)0x8c2856a0 + (o->f80 << 2))));
        if (o->f80 == 2) {
            if (!(o->f7e >= 0xf)) {
                goto L_8c0b7548;
            }
            if (!(0x19 > o->f7e)) {
                goto L_8c0b7548;
            }
            if (t3 == 0) {
                goto L_8c0b7548;
            }
            t3->f44 = 1.3f;
            t3->f48 = 1.3f;
        } else {
            if (o->f7e >= 0x19 && 0x1e > o->f7e && t3 != 0) {
                t3->f44 = 1.3f;
                t3->f48 = 1.8f;
            }
        }
    }
L_8c0b7548:;
    operation_8c0ada54((void *)o);
    if ((int)(o->f6c) > o->fc8) {
        o->f04 |= 1;
    }
}
