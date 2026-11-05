/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c65dc
 * function: operation_8c0c65dc
 * language: c
 * reference size: 484 bytes
 * compiled size: 484 bytes (+0.0%)
 * differing lines: 64 of 176 reference instruction lines
 * differing bytes: 85
 * provenance: generator draft (experimental generator, mode bgotoext)
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
typedef struct Frame Frame;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg3 Arg3;
typedef struct Arg3_0 Arg3_0;
typedef struct Arg3_4 Arg3_4;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_10 {
    char unknown0[0x8];
    float f08;
} Block_frame_10;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x104];
    float f120;
    int f124;
    Arg1 *f128;
    float f12c;
    int f130;
    int f134;
    short f138;
    short f13a;
};
struct Frame {
    int f04;
    int f08;
    int f0c;
    Block_frame_10 f10;
};
struct Arg3 {
    Arg3_0 *f00;
    Arg3_4 *f04;
};
struct S_vv1 {
    float f00;
    float f04;
    float f08;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
extern Vector3 g_8c3065e4;
extern S_g8c44be94 *g_8c44be94;
extern float g_8c46f3f8;
extern float g_8c46f3fc;
extern void operation_8c051eb8(void *, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern int lookup_object_by_id(unsigned short);
extern float errno_wrap_8c130334(float, float);
extern float distance_xz_root(void *, void *);
extern int create_effect_78d0(void *, void *, int, int);
extern float distance_xz(void *, void *, int);
Object *operation_8c0c65dc(Object *o, Arg1 *a1, int a2, Arg3 *a3, int a4, unsigned short a5)
{
    Frame frame;
    Object **home = &o;
    S_vv1 *v1;
    float t1;
    float t2;
    float t3;
    int t4;
    float t5;
    int t6;
    (void)home;
    operation_8c051eb8((void *)o, g_8c44be94);
    o->dispatch = (void *)0x8c26681c;
    o->f138 = a2;
    o->f13a = a5;
    o->f128 = a1;
    o->f120 = 0.0f;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c3065e4;
    (&frame)->f10.f08 = g_8c46f3f8;
    njRotateY_8c37df90(0, (void *)(a3->f04));
    njRotateX_8c37dd28(0, (void *)(a3->f00));
    call_8c3be280(0, (void *)(&(&frame)->f10), (void *)(((char *)o + 0xfc)));
    njPopMatrixEx_8c38ad10();
    o->f124 = a4;
    t6 = lookup_object_by_id((unsigned short)a2);
    (&frame)->f04 = 0;
    v1 = (S_vv1 *)(t6 + 0x324);
    t1 = errno_wrap_8c130334(v1->f00 - a1->f00, v1->f08 - a1->f08);
    (&frame)->f08 = (int)(t1 * 65536.0f / 6.28318405f) + 0x4000;
    t2 = distance_xz_root((void *)v1, (void *)a1);
    t3 = errno_wrap_8c130334(v1->f04 - a1->f04, t2);
    (&frame)->f0c = 0x4000 - (int)(t3 * 65536.0f / 6.28318405f);
    t4 = create_effect_78d0((void *)a1, (void *)(&(&frame)->f04), 0xf4, 2);
    o->f130 = (int)(t4);
    o->f12c = g_8c46f3fc;
    t5 = distance_xz((void *)v1, (void *)a1, t4);
    if (22500.0f > t5) {
        o->f12c *= 2.0f;
    }
    o->f134 = 0;
    return o;
}
