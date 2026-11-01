/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13ec98
 * function: operation_8c13ec98
 * language: c
 * reference size: 452 bytes
 * compiled size: 448 bytes (-0.9%)
 * differing lines: 90 of 198 reference instruction lines
 * differing bytes: 238
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
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
typedef struct S_frame_24 S_frame_24;
typedef struct S_frame_28 S_frame_28;
typedef struct S_frame_2c S_frame_2c;
typedef struct S_frame_8 S_frame_8;
typedef struct Object Object;
typedef struct Arg0_180 Arg0_180;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv3_8 S_vv3_8;
typedef struct S_x16688 S_x16688;
typedef struct S_x86256 S_x86256;
typedef struct Block_frame_24 {
    S_frame_24 *f00;
    S_frame_28 *f04;
    S_frame_2c *f08;
} Block_frame_24;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0xd0];
    int f138;
    char unknown13c[0x44];
    Arg0_180 *f180;
};
struct S_vv1 {
    int f00;
    int f04;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    Vector3 f0c;
    int f18;
    int f1c;
    int f20;
    Block_frame_24 f24;
};
struct S_x16688 {
    Vector3 f00;
};
struct S_x86256 {
    Vector3 f00;
};
extern Vector3 g_8c314670;
void operation_8c13ec98(Object *o, int a1)
{
    Frame frame;
    char *v3;
    unsigned int v4;
    int v2;
    int v7;
    S_vv1 *v1;
    int v8;
    int t1;
    int t2;
    int k;
    v1 = (S_vv1 *)&*(int *)((char *)0x8c3145d0 + (a1 << 4));
    o->f138 = (int)(v1->f04);
    if (o->f138 == 0) {
        return;
    }
    t1 = ((int (*)(int))0x8c18de4c)(o->f138 << 5);
    v2 = (int)&(&frame)->f20;
    o->f180 = (Arg0_180 *)t1;
    k = 0x180;
    v3 = (char *)v1->f00;
    v4 = (unsigned int)0;
    while ((unsigned int)o->f138 > v4) {
        v7 = (int)(v4 << 5);
        (&frame)->f08 = *(int *)((char *)((char *)v3 + 0x4) + (v7));
        (&frame)->f04 = *(int *)((char *)((char *)v3 + 0x8) + (v7));
        (&frame)->f00 = *(int *)(v3 + v7);
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&((S_x16688 *)(v3 + 0x10 + v7))->f00;
        v8 = (int)*(int *)((char *)((char *)v3 + 0x1c) + (v7));
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c314670;
        if ((&frame)->f24.f08 != 0 || (&frame)->f24.f00 != 0 || (&frame)->f24.f04 != 0) {
            ((void (*)(void *))0x8c38ade4)((void *)0x8c400500);
            ((void (*)(int, void *))0x8c37e02c)(0, (&frame)->f24.f08);
            ((void (*)(int, void *))0x8c37dd28)(0, (&frame)->f24.f00);
            ((void (*)(int, void *))0x8c37df90)(0, (&frame)->f24.f04);
            ((void (*)(int, void *, void *))0x8c3be280)(0, &(&frame)->f0c, &(&frame)->f0c);
            ((void (*)(int))0x8c38accc)(1);
            ((void (*)(void *))0x8c38ade4)((void *)0x8c400500);
            ((void (*)(int, void *))0x8c37df90)(0, o->f64);
            ((void (*)(int, void *, void *))0x8c3be280)(0, &(&frame)->f0c, &(&frame)->f0c);
            ((void (*)(int))0x8c38accc)(1);
            ((void (*)(void *, void *, int))0x8c0c5094)(&(&frame)->f0c, &(&frame)->f18, v2);
            (&frame)->f1c = 0;
        } else {
            (&frame)->f18 = 0;
            (&frame)->f1c = 0;
            (&frame)->f20 = 0;
        }
        t2 = ((int (*)(void *, void *, int, int, int, int))0x8c0a7c3c)(((char *)o + 0x3c), &(&frame)->f18, (&frame)->f00, (&frame)->f08, (&frame)->f04, v8);
        *(int *)((char *)((char *)*(Arg0_180 **)((char *)o + k) + 0x0) + (v7)) = (int)(t2);
        *(int *)((char *)((char *)*(Arg0_180 **)((char *)o + k) + 0x10) + (v7)) = (int)(*(int *)((char *)((char *)v3 + 0xc) + (v7)));
        *(Vector3 *)&((S_x86256 *)((int)*(Arg0_180 **)((char *)o + k) + 0x14 + v7))->f00 = *(Vector3 *)&(&frame)->f24;
        v4 = (unsigned int)(v4 + 1);
    }
}
