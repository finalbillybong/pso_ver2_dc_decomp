/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c107e1c
 * function: operation_8c107e1c
 * language: c
 * reference size: 200 bytes
 * compiled size: 200 bytes (+0.0%)
 * differing lines: 92 of 90 reference instruction lines
 * differing bytes: 98
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv7 S_vv7;
typedef struct S_x30128 S_x30128;
typedef struct S_x3248 S_x3248;
typedef struct S_x46192 S_x46192;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    float f20;
    float f24;
    float f28;
    char unknown2c[0x98];
    float fc4;
    char unknownc8[0x4];
    float fcc;
};
struct S_vv7 {
    float f00;
    float f04;
    float f08;
    char unknownc[0x8];
    int f14;
};
struct S_x3248 {
    float f00;
};
struct S_x46192 {
    float f00;
};
struct S_x30128 {
    float f00;
};
extern void TDeadSpot_ctor_8c107750(Object *, int, int, int, int, int);
Object *operation_8c107e1c(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    S_vv7 *v7;
    int v6;
    float v1;
    float v2;
    float v3;
    float v4;
    int v5;
    int n;
    TDeadSpot_ctor_8c107750(o, a1, a2, a3, a4, a5);
    o->dispatch = (void *)0x8c2698b0;
    o->fcc = 0.0f;
    v1 = (float)o->fc4;
    v2 = (float)o->f20;
    v3 = (float)o->f24;
    v4 = (float)o->f28;
    v5 = (int)0xffffff;
    n = 4;
    for (v6 = 0, v7 = (S_vv7 *)((char *)o + 0x5c); n > v6; v6++, v7++) {
        v7->f00 = ((S_x3248 *)((char *)(int *)((char *)o + 0x2c) + v6 * 0xc))->f00 * v1 + v2;
        v7->f04 = ((S_x46192 *)((char *)(int *)((char *)o + 0x30) + v6 * 0xc))->f00 * v1 + v3;
        v7->f08 = ((S_x30128 *)((char *)(int *)((char *)o + 0x34) + v6 * 0xc))->f00 * v1 + v4;
        v7->f14 = v5;
    }
    return o;
}
