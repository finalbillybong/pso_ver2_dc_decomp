/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cbf48
 * function: operation_8c0cbf48
 * language: c
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 24 of 117 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2_0 Arg2_0;
typedef struct Arg2 {
    Arg2_0 *f00;
} Arg2;
extern float njCos_8c38c154(void *);
extern float njSin_8c37eb0c(void *);
extern float operation_8c0cbebc(void *, float, float);
void operation_8c0cbf48(char *a0, Vector3 *a1, Arg2 *a2)
{
    Vector3 frame;
    float s;
    float c;
    float v;
    Vector3 *pos;
    Vector3 *out;
    short *pk;
    int i;
    s = njCos_8c38c154((void *)(a2->f00));
    c = -njSin_8c37eb0c((void *)(a2->f00));
    v = -60.0f;
    pos = (Vector3 *)(a0 + 8);
    out = (Vector3 *)(a0 + 0x8c);
    pk = (short *)(a0 + 0x110);
    for (i = 0; i < 0xb; i++) {
        frame.x = s * v;
        frame.z = c * v;
        pos->x = frame.x + a1->x;
        pos->z = frame.z + a1->z;
        pos->y = operation_8c0cbebc((void *)&frame, 60.0f, 16.0f);
        *out = frame;
        *pk++ = (int)(pos->x * 0.0125f * 1024.0f);
        *pk++ = (int)(pos->z * -0.0125f * 1024.0f);
        out++;
        pos++;
        v += 12.0f;
    }
}
