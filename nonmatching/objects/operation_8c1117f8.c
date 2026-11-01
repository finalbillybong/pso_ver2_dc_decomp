/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1117f8
 * function: operation_8c1117f8
 * language: c
 * reference size: 480 bytes
 * compiled size: 488 bytes (+1.7%)
 * differing lines: 164 of 170 reference instruction lines
 * differing bytes: 405
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_42c S_g8c4d7bbc_42c;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_s118 Arg0_s118;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Block_p0_3c {
    int f00;
    char unknown4[0x8];
} Block_p0_3c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    short f2c;
    char unknown2e[0xe];
    Block_p0_3c f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    float fe4;
    float fe8;
    float fec;
    int ff0;
    Arg0_f4 *ff4;
    int ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    float f10c;
    short f110;
    char unknown112[0x2];
    int f114;
    int f118;
    float f11c;
    char unknown120[0x4];
    int f124;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_s118 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c4d7bbc {
    char unknown0[0x42c];
    S_g8c4d7bbc_42c *f42c;
};
struct S_g8c4d7bbc_42c {
    char unknown0[0x58];
    int f58;
    int f5c;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0xa];
    short f2c;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d7bbc *g_8c4d7bbc;
extern void operation_8c051eb8(void *, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *operation_8c1117f8(Object *o, Arg1 *a1, Arg2 *a2, int a3, int a4)
{
    Object **home = &o;
    char *v2;
    char *v1;
    (void)home;
    operation_8c051eb8((void *)o, g_8c44be94);
    o->dispatch = (void *)0x8c269b70;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00;
    v2 = (char *)((Arg0_s3c *)((char *)o + 0x3c))->f04;
    o->f118 = (int)(o->f3c.f00);
    ((Arg0_s118 *)((char *)o + 0x118))->f04 = (int)(v2);
    ((Arg0_s118 *)((char *)o + 0x118))->f08 = (int)(((Arg0_s3c *)((char *)o + 0x3c))->f08);
    o->f11c += 5.0f;
    o->f114 = a4;
    v1 = (char *)g_8c4d7bbc->f42c->f58;
    o->ffc = (int)(v1);
    o->f100 = (int)(g_8c4d7bbc->f42c->f5c);
    o->f2c = a1->f2c;
    o->f110 = a1->f20;
    o->ff0 = 0;
    o->ff4 = (Arg0_f4 *)(a3 + 0x8000);
    o->ff8 = -0x4000;
    o->f104 = 0;
    o->f108 = 0;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    o->fe4 = 0.0f;
    o->fe8 = 0.0f;
    o->fec = 0.5f;
    njRotateY_8c37df90(0, (void *)(o->ff4));
    call_8c3be38c(0, (void *)(&o->fe4), (void *)(&o->fe4));
    njPopMatrixEx_8c38ad10();
    o->f10c = 0.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c30fe20), 1);
    o->fdc->f0c = 3.0f;
    attach_and_insert_object((void *)o);
    o->f124 = 0xf;
    return o;
}
