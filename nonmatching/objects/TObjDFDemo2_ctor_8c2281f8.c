/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2281f8
 * function: TObjDFDemo2_ctor_8c2281f8
 * language: c
 * reference size: 404 bytes
 * compiled size: 400 bytes (-1.0%)
 * differing lines: 114 of 149 reference instruction lines
 * differing bytes: 308
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * class header: src/include/classes/TObjDFDemo2.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4e2280 S_g8c4e2280;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_430 S_vv1_430;
typedef struct Block_frame_4 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
} Block_frame_4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8c];
    int fac;
    Vector3 fb0;
    int fbc;
    int fc0;
    float fc4;
};
struct Arg2 {
    Vector3 f00;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
struct Frame {
    Block_frame_4 f04;
};
extern int g_8c337dc0;
extern Vector3 g_8c337dd8;
extern S_g8c4e2280 *g_8c4e2280;
extern void TObjectShared_ctor_8c01d1ec(Object *);
extern void operation_8c0a2144(int);
extern void set_view_offsets(void *, void *, void *);
extern void call_8c0a5400(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
Object *TObjDFDemo2_ctor_8c2281f8(Object *o, int a1, Arg2 *a2, int a3, int a4)
{
    Frame frame;
    Object **home = &o;
    int v2;
    int v4;
    S_vv1 *v1;
    int v3;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c278bd8;
    o->tag = (int)(g_8c337dc0);
    o->size = 0xc8;
    *(Vector3 *)&o->fb0 = *(Vector3 *)&a2->f00;
    o->fbc = a3;
    o->fac = a4;
    v1 = (S_vv1 *)g_8c4e2280;
    v2 = (int)0;
    while (2 > v2) {
        v3 = (int)(v2 << 2);
        v4 = (int)(*(int *)((char *)0x8c32658c + (v3)) << 4);
        *(int *)((char *)((char *)o + 0x94) + (v2 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f42c + 0x8) + (v4)));
        *(int *)((char *)((char *)o + 0x98) + (v2 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f42c + 0xc) + (v4)));
        *(int *)((char *)((char *)o + 0x9c) + (v2 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f430 + 0x4) + (*(int *)((char *)0x8c337dc4 + (v3)) << 3)));
        v2 = (int)(v2 + 1);
    }
    o->fc4 = -0.5f;
    operation_8c0a2144(2);
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&g_8c337dd8;
    (&frame)->f04.f04 = (int)(o->fbc);
    set_view_offsets((void *)(&o->fb0), (void *)(&o->fb0), (void *)(&(&frame)->f04));
    call_8c0a5400((void *)((void *)0x8c337dcc), 0x4444);
    play_se_8c05fbf8(0x30025, (void *)(&o->fb0), 0, 1);
    o->fc0 = 0;
    return o;
}
