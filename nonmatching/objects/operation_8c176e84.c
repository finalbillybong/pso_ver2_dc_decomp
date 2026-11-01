/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c176e84
 * function: operation_8c176e84
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 10 of 115 reference instruction lines
 * differing bytes: 10
 * provenance: generator draft (mode switch2)
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
typedef struct S_g8c4dab04 S_g8c4dab04;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_64 Arg1_64;
typedef struct Arg2 Arg2;
typedef struct Block_frame_4 {
    char unknown0[0x8];
    float f08;
} Block_frame_4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x20];
    Vector3 f3c;
    char unknown48[0x18];
    int f60;
    char unknown64[0xa0];
    int f104;
    int f108;
    int f10c;
    int f110;
    short f114;
};
struct Arg1 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    Arg1_64 *f64;
};
struct Arg2 {
    Vector3 f00;
};
struct Frame {
    Block_frame_4 f04;
};
struct S_g8c4dab04 {
    float f00;
    char unknown4[0x14];
    int f18;
};
extern void operation_8c051eb8(void *);
extern void copy_actor_records(void *, void *, int);
extern int create_effect_78d0(void *, void *, int, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
Object *operation_8c176e84(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c270934;
    copy_actor_records((void *)o, (void *)((void *)0x8c3193d8), 1);
    o->f114 = a1->f20;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f00;
    o->f104 = a3;
    o->f60 = 0;
    t1 = create_effect_78d0((void *)(&o->f3c), (void *)(&o->f60), 0x11c, 2);
    o->f10c = (int)(t1);
    t2 = create_effect_78d0((void *)(&o->f3c), (void *)(&o->f60), 0x11d, 2);
    o->f110 = (int)(t2);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&*(Vector3 *)0x8c319408;
    (&frame)->f04.f08 = (*(S_g8c4dab04 **)0x8c4dab04)->f00;
    njRotateY_8c37df90(0, (void *)(a1->f64));
    call_8c3be38c(0, (void *)(&(&frame)->f04), (void *)(((char *)o + 0xec)));
    njPopMatrixEx_8c38ad10();
    o->f108 = (int)((*(S_g8c4dab04 **)0x8c4dab04)->f18);
    return o;
}
