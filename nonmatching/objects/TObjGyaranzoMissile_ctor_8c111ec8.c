/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c111ec8
 * function: TObjGyaranzoMissile_ctor_8c111ec8
 * language: c
 * reference size: 452 bytes
 * compiled size: 452 bytes (+0.0%)
 * differing lines: 84 of 166 reference instruction lines
 * differing bytes: 142
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg2_0 Arg2_0;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0xc];
    short f2c;
    char unknown2e[0xe];
    Vector3 f3c;
    char unknown48[0x18];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    float fe4;
    float fe8;
    float fec;
    char unknownf0[0xc];
    short ffc;
    char unknownfe[0x2];
    int f100;
    int f104;
    int f108;
    float f10c;
    short f110;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg2 {
    Arg2_0 *f00;
    int f04;
    int f08;
    float f0c;
    float f10;
};
struct Arg2_0 {
    Vector3 f00;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0xa];
    short f2c;
};
extern int g_8c30fe9c;
extern S_g8c44be94 *g_8c44be94;
extern float g_8c4d7bb4;
extern void operation_8c051eb8(void *, void *);
extern void copy_actor_records(void *, void *, int);
extern int rand(Object *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
Object *TObjGyaranzoMissile_ctor_8c111ec8(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    operation_8c051eb8((void *)o, g_8c44be94);
    o->dispatch = (void *)0x8c269bb4;
    o->tag = (int)(g_8c30fe9c);
    o->size = 0x114;
    copy_actor_records((void *)o, (void *)((void *)0x8c30fe70), 1);
    o->fdc->f0c = 4.0f;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00->f00;
    o->ffc = a3;
    o->f60 = (Arg0_60 *)a2->f04;
    o->f64 = (Arg0_64 *)a2->f08;
    t1 = rand(o);
    o->f104 = (int)((float)t1 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    t2 = rand((Object *)0x104);
    o->f108 = (int)(a2->f0c * (((float)t2 / 32768.0f + 1.0f) * 0.5f));
    o->f10c = a2->f10;
    o->f2c = a1->f2c;
    o->f110 = a1->f20;
    o->fe4 = 0.0f;
    o->fe8 = 0.0f;
    o->fec = g_8c4d7bb4;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f64));
    njRotateX_8c37dd28(0, (void *)(o->f60));
    call_8c3be280(0, (void *)(&o->fe4), (void *)(&o->fe4));
    njPopMatrixEx_8c38ad10();
    o->f100 = 0;
    return o;
}
