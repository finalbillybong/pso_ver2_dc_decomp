/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c150e9c
 * function: TBoss3VoloptMonitor_ctor_1_8c150e9c
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 52 of 184 reference instruction lines
 * differing bytes: 46
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
typedef struct S_g8c4da6d0 S_g8c4da6d0;
typedef struct S_g8c4da6d0_42c S_g8c4da6d0_42c;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_x35984 S_x35984;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x6];
    int f38;
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x1c];
    int f84;
    char unknown88[0x54];
    Arg0_dc *fdc;
    char unknowne0[0x278];
    short f358;
    char unknown35a[0x2a];
    int f384;
    char unknown388[0x20];
    short f3a8;
};
struct Arg1 {
    char unknown0[0x2c];
    short f2c;
    short f2e;
};
struct S_g8c4da6d0 {
    char unknown0[0x42c];
    S_g8c4da6d0_42c *f42c;
};
struct S_vv1 {
    Vector3 f00;
};
struct S_x35984 {
    float f00;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
extern int g_8c315a34;
extern S_g8c4da6d0 *g_8c4da6d0;
extern char g_8c31591c[];
extern char g_8c3159cc[];
extern char g_8c4da704[];
extern void TObjEnemyCustom_ctor_8c0c2354(void *);
extern void call_8c1510c8(Object *);
extern int call_8c18e768(int, int);
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, int, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void copy_actor_records(void *, void *, int);
Object *TBoss3VoloptMonitor_ctor_1_8c150e9c(Object *o, Arg1 *a1, int a2, int a3, register int a4, int a5)
{
    Object **home = &o;
    S_vv1 *v1;
    short v2;
    float v4;
    int t1;
    (void)home;
    TObjEnemyCustom_ctor_8c0c2354((void *)o);
    o->dispatch = (void *)0x8c26e7f4;
    o->tag = (int)(g_8c315a34);
    o->size = 0x3b0;
    o->f20 = a2;
    o->f30 = a3;
    o->f84 = 0;
    o->f2c = a1->f2c;
    o->f2e = a1->f2e;
    o->f3a8 = a4;
    o->f384 = a4 & 3;
    o->f358 = a5;
    call_8c1510c8(o);
    t1 = call_8c18e768(a4, 4);
    o->f64 = (Arg0_64 *)(int)((float)(t1 * 0x3c) * 65536.0f / 360.0f);
    o->f38 = (int)(*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)0x8c3159fc + (o->f384 << 2)) << 4)));
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3be280(0, (int)(o->f384 * 0xc + g_8c3159cc), (void *)(&o->f3c));
    njPopMatrixEx_8c38ad10();
    {
        Object *base = o;
        v1 = (S_vv1 *)(base->f3a8 * 0xc + g_8c4da704);
        *(Vector3 *)&v1->f00 = *(Vector3 *)&base->f3c;
        v2 = (short)base->f3a8;
        if ((((short)v2 & 3)) == 0) {
            v4 = (float)43.0f;
        } else {
            v4 = (float)15.0f;
        }
        ((S_x35984 *)((char *)(g_8c4da704 + 0x4) + (short)v2 * 0xc))->f00 = v4;
        copy_actor_records((void *)base, (void *)(base->f384 * 0x2c + g_8c31591c), 1);
    }
    o->fdc->f18 |= 0xa00;
    return o;
}
