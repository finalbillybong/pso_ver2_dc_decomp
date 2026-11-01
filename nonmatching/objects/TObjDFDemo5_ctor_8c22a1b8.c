/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22a1b8
 * function: TObjDFDemo5_ctor_8c22a1b8
 * language: c
 * reference size: 564 bytes
 * compiled size: 560 bytes (-0.7%)
 * differing lines: 96 of 209 reference instruction lines
 * differing bytes: 425
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
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
    char unknown20[0xac];
    int fcc;
    int fd0;
    int fd4;
    Vector3 fd8;
    int fe4;
    int fe8;
    float fec;
    int ff0;
    char unknownf4[0x18];
    int f10c;
};
struct Arg2 {
    Vector3 f00;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
struct S_vv1_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct S_vv1_430 {
    char unknown0[0x11c];
    int f11c;
};
struct Frame {
    Block_frame_4 f04;
    Vector3 f10;
};
extern int g_8c3380a0;
extern Vector3 g_8c338100;
extern Vector3 g_8c33810c;
extern S_g8c4e2280 *g_8c4e2280;
extern void TObjectShared_ctor_8c01d1ec(Object *);
extern void operation_8c0a2144(int);
extern void set_view_offsets(void *, void *, void *);
extern void call_8c0a5400(void *, int);
extern int call_8c161bdc(void *, void *);
extern void play_se_8c05fbf8(int, int, int, int);
Object *TObjDFDemo5_ctor_8c22a1b8(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int v3;
    int v4;
    int v2;
    S_vv1 *v1;
    int v5;
    int v6;
    int t1;
    int t2;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c278d18;
    o->tag = (int)(g_8c3380a0);
    o->size = 0x11c;
    *(Vector3 *)&o->fd8 = *(Vector3 *)&a2->f00;
    o->fe4 = a3;
    v1 = (S_vv1 *)g_8c4e2280;
    v2 = (int)0;
    while (3 > v2) {
        v6 = v2 * 0xc;
        v3 = (int)(v2 << 2);
        v4 = (int)(*(int *)((char *)0x8c327a70 + (v3)) << 4);
        *(int *)((char *)((char *)o + 0xa8) + (v6)) = (int)(*(int *)((char *)((char *)v1->f42c + 0x8) + (v4)));
        *(int *)((char *)((char *)o + 0xac) + (v6)) = (int)(*(int *)((char *)((char *)v1->f42c + 0xc) + (v4)));
        *(int *)((char *)((char *)o + 0xb0) + (v6)) = (int)(*(int *)((char *)((char *)v1->f430 + 0x4) + (*(int *)((char *)0x8c3380f4 + (v3)) << 3)));
        v2 = (int)(v2 + 1);
    }
    o->fcc = (int)(v1->f42c->f18);
    o->fd0 = (int)(v1->f42c->f1c);
    o->fd4 = (int)(v1->f430->f11c);
    o->fec = -0.5f;
    v5 = (int)0;
    while (5 > v5) {
        *(int *)((char *)((char *)o + 0x94) + (v5 << 2)) = 0;
        v5 = (int)(v5 + 1);
    }
    operation_8c0a2144(2);
    *(Vector3 *)&(&frame)->f10 = *(Vector3 *)&g_8c338100;
    {
        Vector3 *p_ = (Vector3 *)&g_8c33810c;
        *(Vector3 *)&(&frame)->f04 = *p_;
    }
    (&frame)->f04.f04 = (int)(o->fe4);
    set_view_offsets((void *)(&o->fd8), (void *)(&o->fd8), (void *)(&(&frame)->f04));
    call_8c0a5400((void *)(&(&frame)->f10), 0x416c);
    t1 = call_8c161bdc((void *)((void *)0x8c3380a4), (void *)(((char *)o + 0xf4)));
    o->ff0 = (int)(t1);
    t2 = call_8c161bdc((void *)((void *)0x8c3380d4), (void *)(((char *)o + 0x110)));
    o->f10c = (int)(t2);
    play_se_8c05fbf8(0x30035, 0, 0, 0);
    o->fe8 = 0;
    return o;
}
