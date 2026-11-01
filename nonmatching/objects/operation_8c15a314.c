/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15a314
 * function: operation_8c15a314
 * language: c
 * reference size: 436 bytes
 * compiled size: 440 bytes (+0.9%)
 * differing lines: 104 of 155 reference instruction lines
 * differing bytes: 299
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b60 S_g8c4d9b60;
typedef struct S_g8c4d9b60_42c S_g8c4d9b60_42c;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x20];
    int f3c;
    char unknown40[0x20];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    int fe4;
    int fe8;
    float fec;
    float ff0;
    float ff4;
    char unknownf8[0xc];
    int f104;
    int f108;
    char unknown10c[0xc];
    int f118;
    int f11c;
    int f120;
    int f124;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg2 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_g8c4da87c {
    float f00;
    char unknown4[0x8];
    float f0c;
};
struct S_g8c4d9b60 {
    char unknown0[0x42c];
    S_g8c4d9b60_42c *f42c;
};
struct S_g8c4d9b60_42c {
    char unknown0[0x168];
    int f168;
    int f16c;
};
extern S_g8c4d9b60 *g_8c4d9b60;
extern S_g8c4da87c *g_8c4da87c;
extern int g_8c4dab20;
extern void operation_8c051eb8(void *);
extern void copy_actor_records(void *, void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern int create_effect_78d0(void *, void *, int, int);
Object *operation_8c15a314(Object *o, int a1, Arg2 *a2, int a3, int a4)
{
    Object **home = &o;
    char *v1;
    char *v2;
    int t1;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c26ee00;
    copy_actor_records((void *)o, (void *)((void *)0x8c316558), 1);
    o->fdc->f0c = 5.0f;
    v1 = (char *)a2->f00;
    v2 = (char *)a2->f04;
    o->f3c = (int)(v1);
    ((Arg0_s3c *)((char *)o + 0x3c))->f04 = (int)(v2);
    ((Arg0_s3c *)((char *)o + 0x3c))->f08 = (int)(a2->f08);
    o->f104 = a4;
    o->f60 = (Arg0_60 *)0;
    o->f64 = (Arg0_64 *)a3;
    o->fec = 0.0f;
    o->ff0 = 0.0f;
    o->ff4 = g_8c4da87c->f00;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f64));
    njRotateX_8c37dd28(0, (void *)(o->f60));
    call_8c3be280(0, (void *)(&o->fec), (void *)(&o->fec));
    njPopMatrixEx_8c38ad10();
    o->fe4 = (int)(g_8c4d9b60->f42c->f168);
    o->fe8 = (int)(g_8c4d9b60->f42c->f16c);
    o->f108 = 0;
    o->f124 = 0;
    o->f120 = 0;
    o->f11c = 0;
    t1 = create_effect_78d0((void *)(&o->f3c), (void *)(&o->f11c), 0x112, 2);
    o->f118 = (int)(t1);
    g_8c4dab20 = (int)g_8c4da87c->f0c + 0xf0;
    return o;
}
