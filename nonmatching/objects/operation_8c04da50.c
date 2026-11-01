/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04da50
 * function: operation_8c04da50
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 28 of 115 reference instruction lines
 * differing bytes: 35
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x2cc];
    int f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x4];
    float f374;
    char unknown378[0x14];
    Arg0_38c *f38c;
    char unknown390[0x28];
    short f3b8;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_36c {
    float f00;
    float f04;
};
extern void operation_8c01c5f0(Object *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(Frame *, void *);
extern float call_8c044e94(Object *, float, Vector3);
extern void operation_8c04a43c(void *, float, void *);
extern int call_8c24e644(int, void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void update_last_effect(int);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void operation_8c04da50(Object *o)
{
    Frame frame;
    float v3;
    float v4;
    float t1;
    int t2;
    o->f34 |= 0x4040000;
    operation_8c01c5f0(o);
    (&frame)->f00.f04 = 0.0f;
    (&frame)->f00.f00 = 0.0f;
    (&frame)->f00.f08 = o->f374;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
    njPopMatrix_8c38accc(1);
    call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x54)));
    t1 = call_8c044e94(o, o->f36c->f04 * 2.0f, *(Vector3 *)&(&frame)->f00);
    v3 = (float)o->f36c->f00;
    v4 = (float)o->f36c->f04;
    if (t1 > (v3 * v3) || (v4 * v4) > t1) {
        o->f334 = 0;
        o->f3b8 = 0;
    } else {
    }
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    t2 = call_8c24e644(0x30001, (void *)(o->f38c));
    call_8c05fd7c(t2, o, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x200);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
