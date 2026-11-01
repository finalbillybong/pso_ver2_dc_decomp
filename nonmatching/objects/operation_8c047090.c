/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c047090
 * function: operation_8c047090
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 10 of 107 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
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
    char unknown38[0x170];
    short f1a8;
    char unknown1aa[0x6];
    short f1b0;
    char unknown1b2[0x132];
    int f2e4;
    float f2e8;
    int f2ec;
};
struct Frame {
    char unknown0[0xc];
    float f0c;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void extra_b6394(void *, void *, void *, int, void *, int, float);
typedef struct F1 { float v; } F1;
void operation_8c047090(Object *o, int a1, int a2, int a3, int a4, F1 s)
{
    float v4;
    int t1;
    float k;
    k = s.v;
    *(short *)((char *)o + 0x1b0) += (int)((float)o->f1a8 * -o->f2e8);
    o->f2e4 = a4;
    if (a4 != 0xc) {
        v4 = (float)((k * 1.3f + 10.0f) * 0.01f);
    } else {
        v4 = (float)((k + 10.0f) * -0.01f);
    }
    o->f2e8 = v4;
    o->f1b0 += (int)(v4 * (float)o->f1a8);
    o->f2ec = (int)((k * 10.0f + 40.0f) * 30.0f);
    if (((o->f34 & 0x2000000)) == 0) {
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x68);
        if (t1 != 0) {
            extra_b6394((void *)t1, (void *)((void *)0x8c284ae0), (void *)((void *)0x8c284af0), 0x2d, (void *)o, (int)g_8c44bea0, 0.1f);
        }
    }
}
