/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13ca08
 * function: operation_8c13ca08
 * language: c
 * reference size: 384 bytes
 * compiled size: 376 bytes (-2.1%)
 * differing lines: 18 of 135 reference instruction lines
 * differing bytes: 164
 * provenance: generator draft (mode retflip2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9c38 S_g8c4d9c38;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0xc4];
    unsigned short f1b6;
    char unknown1b8[0x1a0];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x1c];
    int f3c4;
};
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
extern void operation_8c108488(int, int);
extern void operation_8c13bb4c(int, int);
extern void interrupt_state_8c13be60(int);
extern void operation_8c01c5f0(Object *);
extern void TBreakUpMdl_create_8c108644(int, int, int, int, int);
extern void operation_8c1083c4(int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c13ca08(Object *o)
{
    S_vv1 *v1;
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c13ca9a;
            }
            if (o->f398 == 2) {
                goto L_8c13cb08;
            }
        } else {
            o->f34 |= 0x4040000;
            o->f34 |= 0x44040000;
            o->f34 &= -0x20000001;
            v1 = (S_vv1 *)o->fdc;
            v1->f18 |= 0x2000;
            o->ff0 = 4;
            o->f398 = 1;
            o->f358 = 0x5a;
            operation_8c108488((int)(((char *)o + 0x324)), (int)(o->f358));
            if (o->f3c4 != 0) {
                *(int *)0x8c4d9b84 = 1;
                operation_8c13bb4c((int)(o->f1b6), 0);
                interrupt_state_8c13be60(0x12c);
            }
            o->f398 = 1;
L_8c13ca9a:;
            operation_8c01c5f0(o);
            *(short *)((char *)o + 0x358) -= 1;
            if (!(o->f358 >= 0)) {
                TBreakUpMdl_create_8c108644((int)(*(S_g8c4d9c38 **)0x8c4d9c38), (int)((void *)0x8c313788), (int)(o->f28), (int)(((char *)o + 0x324)), (int)(o->f64));
                operation_8c1083c4((int)(((char *)o + 0x324)));
                o->f3a4 |= 0x40000;
                play_se_8c05fbf8(0x30007, (void *)(((char *)o + 0x3c)), 0, 0);
                o->f398 = 2;
                o->f34 &= -0x801;
                goto L_8c13cb08;
            }
        }
L_8c13cb08:;
        refresh_follow_effect_8c052180((void *)o);
    }
}
