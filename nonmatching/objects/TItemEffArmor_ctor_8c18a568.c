/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18a568
 * function: TItemEffArmor_ctor_8c18a568
 * language: c
 * reference size: 332 bytes
 * compiled size: 328 bytes (-1.2%)
 * differing lines: 92 of 133 reference instruction lines
 * differing bytes: 300
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_4 {
    int f00;
    char unknown4[0x8];
} Block_frame_4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    char unknown24[0x4];
    float f28;
    float f2c;
    char unknown30[0xc];
    Block16 f3c;
    char unknown4c[0x10];
    float f5c;
    float f60;
    float f64;
    float f68;
    int f6c;
    int f70;
};
struct S_vv1 {
    Block16 f00;
};
struct Frame {
    Block_frame_4 f04;
};
extern int g_8c319ec8;
extern Vector3 g_8c319ecc;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c2e2e84[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern void operation_1932c4(void *, void *, void *);
extern int create_effect_769c(void *, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void extra_b6394(void *, void *, void *, int, void *, int, float);
Object *TItemEffArmor_ctor_8c18a568(Object *o, int a1, float f0, float f1)
{
    Frame frame;
    Object **home = &o;
    S_vv1 *v1;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, g_8c44bea0);
    o->dispatch = (void *)0x8c272228;
    o->tag = (int)(g_8c319ec8);
    o->size = 0x80;
    o->f28 = 0.0f;
    operation_1932c4((void *)(((char *)o + 0x74)), (void *)(((char *)o + 0x7c)), (void *)(((char *)o + 0x78)));
    o->f2c = f0;
    o->f5c = f1;
    o->f70 = a1;
    o->f6c = 0;
    o->f60 = *(float *)(g_8c2e2e84 + 0x20);
    o->f64 = *(float *)(g_8c2e2e84 + 0x1c);
    o->f68 = (1.0f - o->f60) / 14.5f;
    t1 = create_effect_769c((void *)((int)o->f70 + 0x3c), 0x1ba);
    v1 = (S_vv1 *)(void *)0x8c287280;
    o->f20 = (int)(t1);
    *(Block16 *)&o->f3c = *(Block16 *)&v1->f00;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&g_8c319ecc;
    t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x68);
    if (t2 != 0) {
        extra_b6394((void *)t2, (void *)v1, (void *)(&(&frame)->f04.f00), 0x3a, (void *)a1, (int)g_8c44bea0, 0.2f);
    }
    return o;
}
