/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20b22c
 * function: operation_8c20b22c
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 36 of 39 reference instruction lines
 * differing bytes: 40
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    char unknown10[0x1c];
    float f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x14];
    float f1c;
};
extern float g_8c2e153c;
void operation_8c20b22c(Object *o, int a1, int a2)
{
    S_vv2 *v2;
    int v3;
    float v1;
    float k;
    float h;
    float w;
    h = o->f0c * 0.5f;
    k = g_8c2e153c * o->f2c;
    v1 = k * (float)a2 + (o->f04 + h - h * o->f2c);
    w = v1 + k;
    v2 = (S_vv2 *)a1;
    for (v3 = 0; v3 < 4; v3++) {
        v2->f04 = v1;
        v2->f1c = w;
        v2 = (S_vv2 *)((char *)v2 + 48);
    }
}
