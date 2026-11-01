/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0828
 * function: operation_8c0a0828
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 30 of 38 reference instruction lines
 * differing bytes: 36
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x4c];
    float f4c;
    float f50;
    float f54;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0xbc8];
    float fc10;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c0a0828(Object *o)
{
    S_c8c021ef8 *t1;
    float x;
    float y;
    float z;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        x = t1->f3c;
        y = t1->f40 + t1->fc10 / 2.0f;
        z = t1->f44;
        o->f4c = x;
        o->f50 = y;
        o->f54 = z;
    }
}
