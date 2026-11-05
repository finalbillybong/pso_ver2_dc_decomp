/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09b428
 * function: operation_8c09b428
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 2 of 63 reference instruction lines
 * differing bytes: 6
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_18 Arg0_18;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_8 Arg0_8;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    Arg0_8 *f08;
};
extern void operation_8c09b34c(void);
extern void operation_8c09b3b8(void);
extern void operation_8c01d074(int, int);
void operation_8c09b428(Object *o)
{
    char *v4;
    int v3;
    int v2;
    int v1;
    operation_8c09b34c();
    operation_8c09b3b8();
    operation_8c01d074((int)(o->f04), (int)((void *)0x8c469ec0));
    operation_8c01d074((int)(o->f08), (int)((void *)0x8c46a000));
    v2 = (int)0;
    v1 = (int)0x208;
    while (3 > v2) {
        v3 = (int)(v2 << 2);
        v4 = (char *)*(int *)((char *)((char *)o + 0xc) + (v3));
        operation_8c01d074((int)(*(Arg0_18 **)((char *)((char *)o + 0x18) + (v3))), (int)((int)(v4) * 0x28 + 0x8c469ee8));
        operation_8c01d074((int)(*(Arg0_24 **)((v3) + (char *)((char *)o + 0x24))), (int)((int)(v4) * v1 + 0x8c46a208));
        v2 = (int)(v2 + 1);
    }
}
