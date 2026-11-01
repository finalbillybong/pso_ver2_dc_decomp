/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c046f2c
 * function: operation_8c046f2c
 * language: c
 * reference size: 356 bytes
 * compiled size: 356 bytes (+0.0%)
 * differing lines: 44 of 136 reference instruction lines
 * differing bytes: 53
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x16a];
    short f1a2;
    short f1a4;
    char unknown1a6[0x4];
    short f1aa;
    short f1ac;
    char unknown1ae[0x12a];
    int f2d8;
    float f2dc;
    int f2e0;
};
struct Frame {
    char unknown0[0xc];
    float f0c;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
typedef struct Arg5 {
    int kind;
    float f;
} Arg5;
void operation_8c046f2c(Object *o, int a1, int a2, int a3, Arg5 p)
{
    float x;
    float v2;
    float v6;
    int t1;
    x = p.f;
    *(short *)((char *)o + 0x1aa) += (int)((float)o->f1a2 * -o->f2dc);
    *(short *)((char *)o + 0x1ac) += (int)((float)o->f1a4 * -o->f2dc);
    o->f2d8 = p.kind;
    if (p.kind != 0xb) {
        v6 = (float)((x * 1.3f + 10.0f) * 0.01f);
    } else {
        v2 = (float)((x + 10.0f) * -0.01f);
        v6 = (float)v2;
    }
    o->f2dc = v6;
    o->f1aa += (int)(v6 * (float)o->f1a2);
    o->f1ac += (int)(v6 * (float)o->f1a4);
    o->f2e0 = (int)((x * 10.0f + 40.0f) * 30.0f);
    if (((o->f34 & 0x2000000)) == 0) {
        t1 = ((int (*)(void *, int))0x8c122700)(g_8c4d97e0, 0x68);
        if (t1 != 0) {
            ((void (*)(int, void *, void *, int, float, Object *, void *))0x8c0b6394)(t1, (void *)0x8c284ad0, (void *)0x8c284af0, 0x2d, 0.1f, o, g_8c44bea0);
        }
    }
}
