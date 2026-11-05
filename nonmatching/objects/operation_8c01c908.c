/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c01c908
 * function: operation_8c01c908
 * language: c
 * reference size: 224 bytes
 * compiled size: 224 bytes (+0.0%)
 * differing lines: 4 of 81 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_130 Arg0_130;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0xe8];
    int fe8;
    int fec;
    short ff0;
    short ff2;
    char unknownf4[0x4];
    float ff8;
    float ffc;
    float f100;
    char unknown104[0xc];
    Arg0_110 *f110;
    int f114;
    char unknown118[0x14];
    short f12c;
    char unknown12e[0x2];
    Arg0_130 *f130;
};
struct S_vv1 {
    short f00;
    char unknown2[0x6];
    float f08;
    int f0c;
};
struct Arg0_130 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x2];
    short f0a;
};
extern void select_actor_animation(Object *, int);
void operation_8c01c908(Object *o, int a1, int a2, int a3)
{
    S_vv1 *v1;
    o->f110 = (Arg0_110 *)a1;
    o->f114 = a2;
    o->ff0 = a3;
    o->ff2 = o->ff0;
    select_actor_animation(o, o->ff0);
    v1 = (S_vv1 *)&*(int *)((char *)((char *)o->f110 + 0x0) + (o->ff0 << 4));
    o->f100 = v1->f08;
    o->f12c = v1->f00;
    o->ffc = (float)(unsigned int)o->f130->f04;
    o->ff8 = 0.0f;
    o->fe8 &= -5;
    o->fec = (int)(v1->f0c);
    if (((o->fec & 0x20000000)) != 0) {
        o->f130->f0a |= 0x80;
    }
}
