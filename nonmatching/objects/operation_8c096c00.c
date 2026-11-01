/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c096c00
 * function: operation_8c096c00
 * language: c
 * reference size: 160 bytes
 * compiled size: 164 bytes (+2.5%)
 * differing lines: 40 of 63 reference instruction lines
 * differing bytes: 45
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
typedef struct S_g8c460900 S_g8c460900;
typedef struct Object Object;
struct Object {
    char unknown0[0x50];
    float f50;
    char unknown54[0x1c];
    float f70;
    int f74;
    int f78;
    char unknown7c[0x8];
    float f84;
    int f88;
};
struct S_g8c460900 {
    char unknown0[0x31];
    char f31;
    char unknown32[0x1a];
    float f4c;
};
extern float operation_8c0352d4(void *);
void operation_8c096c00(Object *o)
{
    int v21;
    float t1;
    v21 = (int)*(int *)0x8c460900;
    if (v21 != 0) {
        t1 = operation_8c0352d4((void *)v21);
        o->f70 = t1 * 0.375f;
        o->f84 = o->f70;
        o->f50 = ((*(float *)((char *)(int *)((char *)0x8c300cc0 + 4) + ((*(S_g8c460900 **)0x8c460900)->f31 << 3)) - *(float *)(((*(S_g8c460900 **)0x8c460900)->f31 << 3) + (char *)0x8c300cc0)) * (1.0f - (*(S_g8c460900 **)0x8c460900)->f4c) + *(float *)(((*(S_g8c460900 **)0x8c460900)->f31 << 3) + (char *)0x8c300cc0)) * 10.0f;
        o->f78 = 0;
        o->f74 = 0;
        *(int *)0x8c469e48 = 2;
        o->f88 = 0x78;
    }
}
