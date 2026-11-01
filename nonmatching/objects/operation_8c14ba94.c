/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14ba94
 * function: operation_8c14ba94
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 28 of 42 reference instruction lines
 * differing bytes: 14
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
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
};
void operation_8c14ba94(Object *o)
{
    int v3;
    int v1;
    int v2;
    int v4;
    v1 = 6 - o->f2c;
    v3 = 0;
    v2 = o->f2c;
    for (; v1 > v3; ) {
        *(int *)((char *)(0x30 + (char *)o) + (v3 << 2)) = *(int *)((char *)0x8c3154d4 + (v2 << 2));
        v2++;
        v3++;
    }
    v4 = 0;
    for (; 6 > v3; ) {
        *(int *)((char *)(0x30 + (char *)o) + (v3 << 2)) = *(int *)((char *)0x8c3154ec + (v4 << 2));
        v4++;
        v3++;
    }
}
