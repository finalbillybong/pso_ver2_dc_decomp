/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a28f8
 * function: operation_8c0a28f8
 * language: c
 * reference size: 168 bytes
 * compiled size: 172 bytes (+2.4%)
 * differing lines: 76 of 76 reference instruction lines
 * differing bytes: 143
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct Object Object;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
struct Object {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
    float f20;
    float f24;
    float f28;
};
extern S_L8c46efc8 g_8c46efc8;
extern char g_8c46efd4[];
int operation_8c0a28f8(Object *o)
{
    if ((((&g_8c46efc8)->f08 & 0x400)) != 0) {
        return 0;
    }
    (&g_8c46efc8)->f08 |= 0x400;
    (&g_8c46efc8)->f08 |= 0x200;
    *(float *)(g_8c46efd4 + 0x4) = o->f04;
    *(float *)(g_8c46efd4 + 0x8) = o->f08;
    *(float *)(g_8c46efd4 + 0xc) = o->f0c;
    *(float *)(g_8c46efd4 + 0x10) = o->f10;
    *(float *)(g_8c46efd4 + 0x14) = o->f14;
    *(float *)(g_8c46efd4 + 0x18) = o->dispatch;
    *(float *)(g_8c46efd4 + 0x1c) = o->f1c;
    *(float *)(g_8c46efd4 + 0x20) = o->f20;
    *(float *)(g_8c46efd4 + 0x24) = o->f24;
    *(float *)(g_8c46efd4 + 0x28) = o->f28;
    return 1;
}
