/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c167284
 * function: TBoss2PhotonBullet_ctor_8c167284
 * language: c
 * reference size: 248 bytes
 * compiled size: 244 bytes (-1.6%)
 * differing lines: 20 of 92 reference instruction lines
 * differing bytes: 188
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TBoss2PhotonBullet.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    Vector3 f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    float fe8;
    Vector3 fec;
    Vector3 ff8;
    float f104;
    float f108;
    float f10c;
    int f110;
    int f114;
    float f118;
    int f11c;
};
struct Arg3 {
    Vector3 f00;
};
struct Arg4 {
    Vector3 f00;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern int g_8c31753c;
extern void operation_8c0f33fc(Object *, int, int);
Object *TBoss2PhotonBullet_ctor_8c167284(Object *o, int a1, int a2, Arg3 *a3, Arg4 *a4, float f0)
{
    operation_8c0f33fc(o, a1, a2);
    o->dispatch = (void *)0x8c26feec;
    o->tag = (int)(g_8c31753c);
    o->size = 0x120;
    *(Vector3 *)&o->ff8 = *(Vector3 *)&a3->f00;
    *(Vector3 *)&o->f3c = *(Vector3 *)&o->ff8;
    *(Vector3 *)&o->fec = *(Vector3 *)&a4->f00;
    o->fdc->f0c = 3.0f;
    o->f104 = 0.0f;
    o->f108 = 0.0f;
    o->f10c = 0.0f;
    o->fe8 = f0;
    o->f110 = 0;
    o->f114 = 0;
    o->f118 = 0.0f;
    o->f11c = 0;
    return o;
}
