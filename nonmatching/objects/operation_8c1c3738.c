/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c3738
 * function: operation_8c1c3738
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 52 of 81 reference instruction lines
 * differing bytes: 44
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
struct Object {
    char unknown0[0x200];
    float f200;
    float f204;
    float f208;
    float f20c;
    float f210;
    float f214;
    float f218;
    float f21c;
    float f220;
    float f224;
};
extern int operation_8c04b8dc(void *);
void operation_8c1c3738(Object *o)
{
    int t1;
    t1 = operation_8c04b8dc((void *)(((char *)o + 0x134)));
    o->f200 = (640.0f - (float)(unsigned int)t1) / 2.0f + 188.0f;
    o->f204 = 256.0f;
    o->f208 = 458.0f;
    o->f20c = o->f204 + 20.0f;
    o->f210 = 458.0f;
    o->f214 = o->f20c + 20.0f;
    o->f218 = 458.0f;
    o->f21c = o->f214 + 20.0f;
    o->f220 = 458.0f;
    o->f224 = o->f21c + 20.0f;
}
