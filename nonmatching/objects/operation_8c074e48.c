/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c074e48
 * function: operation_8c074e48
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 48 of 35 reference instruction lines
 * differing bytes: 49
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x130];
    int f130;
    unsigned char f134;
    char unknown135[0x1];
    unsigned char f136;
    char unknown137[0x1];
    unsigned char f138;
};
void operation_8c074e48(Object *o)
{
    int k;
    k = 0x130;
    *(int *)((char *)o + k) = (unsigned char)o->f134;
    *(int *)((char *)o + k) = *(int *)((char *)o + k) << 8;
    *(int *)((char *)o + k) |= (unsigned char)o->f136;
    *(int *)((char *)o + k) = *(int *)((char *)o + k) << 8;
    *(int *)((char *)o + k) |= (unsigned char)o->f138;
    *(int *)((char *)o + k) ^= (int)((char *)o + k);
}
