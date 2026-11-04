/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0102e4
 * function: TObjCollision_ctor_8c0102e4
 * language: c
 * reference size: 356 bytes
 * compiled size: 364 bytes (+2.2%)
 * differing lines: 172 of 140 reference instruction lines
 * differing bytes: 311
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * class header: src/include/classes/TObjCollision.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_s60 Arg0_s60;
typedef struct Arg0_s6c Arg0_s6c;
typedef struct Arg2 Arg2;
typedef struct Arg2_s18 Arg2_s18;
typedef struct Arg2_s24 Arg2_s24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x18];
    int f60;
    char unknown64[0x8];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x6c];
    float fe4;
    float fe8;
    float fec;
    float ff0;
    float ff4;
    int ff8;
    int ffc;
};
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    int f18;
    char unknown1c[0x8];
    int f24;
};
struct Arg2_s18 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s60 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg2_s24 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s6c {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c2e20d8;
extern void operation_8c051eb8(Object *);
extern float hs_8c12c714(float);
extern void copy_actor_records(Object *, void *, int);
extern void attach_and_insert_object(Object *);
Object *TObjCollision_ctor_8c0102e4(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    char *v3;
    char *v2;
    int v8;
    int v1;
    float t1;
    (void)home;
    operation_8c051eb8(o);
    o->dispatch = (void *)0x8c260ecc;
    o->tag = (int)(g_8c2e20d8);
    o->size = 0x110;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    v3 = (char *)((Arg2_s18 *)((char *)a2 + 0x18))->f04;
    o->f60 = (int)(a2->f18);
    ((Arg0_s60 *)((char *)o + 0x60))->f04 = (int)(v3);
    ((Arg0_s60 *)((char *)o + 0x60))->f08 = (int)(((Arg2_s18 *)((char *)a2 + 0x18))->f08);
    v2 = (char *)a2->f24;
    v8 = (int)((Arg2_s24 *)((char *)a2 + 0x24))->f04;
    *(int *)&o->f6c = (int)(v2);
    ((Arg0_s6c *)((char *)o + 0x6c))->f04 = (int)(v8);
    ((Arg0_s6c *)((char *)o + 0x6c))->f08 = (int)(((Arg2_s24 *)((char *)a2 + 0x24))->f08);
    o->f34 |= 0x2000000;
    o->fe4 = 0.0f;
    o->fe8 = 0.0f;
    o->fec = 0.0f;
    o->ff0 = o->f6c;
    o->ff4 = o->f70;
    v1 = (int)(0.0f > o->f74);
    o->ff8 = (int)(v1);
    o->ffc = 0x20001;
    t1 = hs_8c12c714(o->f74);
    if (1000.0f > t1) {
        o->ffc &= -0x201;
    } else {
        o->ffc |= 0x200;
    }
    copy_actor_records(o, &o->fe4, 1);
    attach_and_insert_object(o);
    return o;
}
