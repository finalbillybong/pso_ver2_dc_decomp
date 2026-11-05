/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04b6e0
 * function: operation_8c04b6e0
 * language: c
 * reference size: 180 bytes
 * compiled size: 188 bytes (+4.4%)
 * differing lines: 94 of 78 reference instruction lines
 * differing bytes: 168
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
};
void operation_8c04b6e0(Object *o, int a1)
{
    int v;
    v = (unsigned short)a1;
    o->tag = v & 3;
    o->tag |= (v & 0x300) >> 4;
    *((unsigned char *)o - 1) = (v & 0xc) >> 2;
    *((unsigned char *)o - 1) |= (v & 0xc00) >> 6;
    *((unsigned char *)o - 4) = (v & 0x30) >> 4;
    *((unsigned char *)o - 4) |= (v & 0x3000) >> 8;
    *((unsigned char *)o - 5) = (v & 0xc0) >> 6;
    *((unsigned char *)o - 5) |= (v & 0xc000) >> 10;
}
