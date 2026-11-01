/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22b56c
 * function: TObjDFDemoF_ctor_8c22b56c
 * language: c
 * reference size: 356 bytes
 * compiled size: 360 bytes (+1.1%)
 * differing lines: 94 of 127 reference instruction lines
 * differing bytes: 279
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2280 S_g8c4e2280;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_430 S_vv1_430;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x74];
    int f94;
    char unknown98[0x24];
    float fbc;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
extern int g_8c3381f0;
extern S_g8c4e2280 *g_8c4e2280;
extern void TObjectShared_ctor_8c01d1ec(Object *);
extern void operation_8c0a2144(int);
extern void set_view_offsets(void *, void *, void *);
extern void call_8c0a5400(void *, int);
extern void play_se_8c05fbf8(int, int, int, int);
extern void operation_8c191654(int, int, int);
extern int g_8c338200[];
Object *TObjDFDemoF_ctor_8c22b56c(Object *o)
{
    Object **home = &o;
    int v3;
    int v2;
    S_vv1 *v1;
    int v4;
    int v5;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c278dd0;
    o->tag = (int)(g_8c3381f0);
    o->size = 0xc0;
    v1 = (S_vv1 *)g_8c4e2280;
    v2 = (int)0;
    while (3 > v2) {
        v3 = (int)(v2 << 2);
        v4 = (int)(*(int *)((char *)0x8c3381f4 + (v3)) << 4);
        *(int *)((char *)((char *)o + 0x98) + (v3)) = (int)(*(int *)((char *)((char *)v1->f42c + 0x8) + (v4)));
        *(int *)((char *)((char *)o + 0xa4) + (v3)) = (int)(*(int *)((char *)((char *)v1->f42c + 0xc) + (v4)));
        v5 = g_8c338200[v2];
        if (!(v5 >= 0)) {
            *(int *)((char *)((char *)o + 0xb0) + (v3)) = 0;
        } else {
            *(int *)((char *)((char *)o + 0xb0) + (v3)) = (int)(*(int *)((char *)((char *)v1->f430 + 0x4) + (v5 << 3)));
        }
        v2 = (int)(v2 + 1);
    }
    o->fbc = -1.0f;
    operation_8c0a2144(2);
    set_view_offsets((void *)((void *)0x8c33820c), (void *)((void *)0x8c33820c), (void *)((void *)0x8c338218));
    call_8c0a5400((void *)((void *)0x8c338224), 0x392d);
    play_se_8c05fbf8(0x30002, 0, 0, 0);
    operation_8c191654(1, 5, 0x1e);
    o->f94 = 0;
    return o;
}
