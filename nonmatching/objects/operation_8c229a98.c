/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c229a98
 * function: operation_8c229a98
 * language: c
 * reference size: 580 bytes
 * compiled size: 576 bytes (-0.7%)
 * differing lines: 180 of 223 reference instruction lines
 * differing bytes: 454
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
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
    char unknown20[0xb8];
    Vector3 fd8;
    int fe4;
    int fe8;
    float fec;
    int ff0;
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
    Vector3 f10;
};
extern int g_8c338018;
extern Vector3 g_8c338060;
extern Vector3 g_8c33806c;
extern S_g8c4e2280 *g_8c4e2280;
extern void TObjectShared_ctor_8c01d1ec(Object *);
extern void operation_8c0a2144(int);
extern void set_view_offsets(void *, void *, void *);
extern void call_8c0a5400(void *, int);
extern int call_8c161bdc(void *, void *);
Object *operation_8c229a98(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v3;
    int v4;
    int v2;
    S_vv1 *v1;
    int v5;
    int v6;
    int v7;
    int v8;
    int t1;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c278cd8;
    o->tag = (int)(g_8c338018);
    o->size = 0x10c;
    *(Vector3 *)&o->fd8 = *(Vector3 *)&a2->f00;
    o->fe4 = a3;
    v1 = (S_vv1 *)g_8c4e2280;
    v2 = (int)0;
    while (2 > v2) {
        v3 = (int)(v2 << 2);
        v4 = (int)(*(int *)((char *)0x8c32658c + (v3)) << 4);
        *(int *)((char *)((char *)o + 0x9c) + (v2 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f42c + 0x8) + (v4)));
        *(int *)((char *)((char *)o + 0xa0) + (v2 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f42c + 0xc) + (v4)));
        *(int *)((char *)((char *)o + 0xa4) + (v2 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f430 + 0x4) + (*(int *)((char *)0x8c33801c + (v3)) << 3)));
        v2 = (int)(v2 + 1);
    }
    v5 = (int)0;
    while (3 > v5) {
        v6 = (int)(v5 << 2);
        v7 = (int)(*(int *)((char *)0x8c327a70 + (v6)) << 4);
        *(int *)((char *)((char *)o + 0xb4) + (v5 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f42c + 0x8) + (v7)));
        *(int *)((char *)((char *)o + 0xb8) + (v5 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f42c + 0xc) + (v7)));
        *(int *)((char *)((char *)o + 0xbc) + (v5 * 0xc)) = (int)(*(int *)((char *)((char *)v1->f430 + 0x4) + (*(int *)((char *)0x8c338024 + (v6)) << 3)));
        v5 = (int)(v5 + 1);
    }
    o->fec = -0.5f;
    v8 = (int)0;
    while (2 > v8) {
        *(int *)((char *)((char *)o + 0x94) + (v8 << 2)) = 0;
        v8 = (int)(v8 + 1);
    }
    operation_8c0a2144(2);
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c338060;
    {
        Vector3 *p_ = (Vector3 *)&g_8c33806c;
        *(Vector3 *)&(&frame)->f04 = *p_;
    }
    (&frame)->f04.f04 = (int)(o->fe4);
    set_view_offsets((void *)(&o->fd8), (void *)(&o->fd8), (void *)(&(&frame)->f04));
    call_8c0a5400((void *)(&(&frame)->f10), 0x416c);
    t1 = call_8c161bdc((void *)((void *)0x8c338030), (void *)(((char *)o + 0xf4)));
    o->ff0 = (int)(t1);
    o->fe8 = 0;
    return o;
}
