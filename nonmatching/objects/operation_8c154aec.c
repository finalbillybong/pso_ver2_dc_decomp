/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c154aec
 * function: operation_8c154aec
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 22 of 84 reference instruction lines
 * differing bytes: 12
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct S_x82352_0 S_x82352_0;
struct S_x82352_0 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_400 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c176db4(void *, int, int);
void operation_8c154aec(Object *o)
{
    int v4;
    int t1;
    int v1;
    int v3;
    char *v5;
    int v6;
    int v10;
    int v2;
    v1 = (int)0x400;
    v2 = (int)0x3f4;
    v3 = (int)0x3b8;
    v4 = (int)0;
    while (*(short *)((char *)((char *)o + 0x0) + (v3)) > v4) {
        v5 = (char *)v4;
        v6 = (int)((int)(v5) << 2);
        if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v6)) != 0) {
            (*(S_x82352_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v6)))->f04 |= 1;
        }
        t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            operation_8c176db4((void *)t1, (int)((int)o + v2), (int)((int)o + v4 * 0xc + 0x3c4));
        }
        *(int *)((char *)((char *)((int)o + v1) + 0x0) + (v6)) = (int)(t1);
        v4 = (int)(v4 + 1);
    }
    while (4 > v4) {
        v10 = (int)(v4 << 2);
        if (*(int *)((char *)((char *)o + 0x400) + (v10)) != 0) {
            (*(Arg0_400 **)((char *)((char *)o + 0x400) + (v10)))->f04 |= 1;
            *(int *)((char *)((char *)o + 0x400) + (v10)) = 0;
        }
        v4 = (int)(v4 + 1);
    }
}
