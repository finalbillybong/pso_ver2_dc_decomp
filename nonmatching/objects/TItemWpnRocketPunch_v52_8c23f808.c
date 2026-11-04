/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23f808
 * function: TItemWpnRocketPunch_v52_8c23f808
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 18 of 53 reference instruction lines
 * differing bytes: 24
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemWpnRocketPunch.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0x8c];
    int f1cc;
    char unknown1d0[0x64];
    int f234;
};
extern void operation_8c075730(void *, void *, int);
extern void operation_8c075894(void *, void *, int, int);
void TItemWpnRocketPunch_v52_8c23f808(Object *o)
{
    char *v1;
    v1 = (char *)o->f38;
    *(int *)((char *)o + 0x234) |= 1;
    operation_8c075730((void *)o, (void *)(o->f13c), 0x30);
    operation_8c075894((void *)o, (void *)(o->f13c), 1, (int)(((char *)o + 0x238)));
    o->f38 = (int)(o->f1cc);
    o->f234 = (unsigned int)o->f234 >> 1 << 1;
    operation_8c075730((void *)o, (void *)(o->f13c), 0x23);
    operation_8c075894((void *)o, (void *)(o->f13c), 1, (int)(((char *)o + 0x244)));
    o->f38 = (int)(v1);
}
