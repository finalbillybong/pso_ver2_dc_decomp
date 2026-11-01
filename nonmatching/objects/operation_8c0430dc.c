/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0430dc
 * function: operation_8c0430dc
 * language: c
 * reference size: 144 bytes
 * compiled size: 140 bytes (-2.8%)
 * differing lines: 14 of 68 reference instruction lines
 * differing bytes: 75
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_c Arg0_c;
struct Object {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    Arg0_c *f0c;
    int f10;
};
struct Arg0_c {
    int f00;
};
extern void njPrintColor_8c38c5b6(int);
extern void call_8c38cc32(int, int, int);
typedef struct Arg4 {
    int f00;
} Arg4;
void operation_8c0430dc(Object *o, int a1, int a2, int a3, Arg4 a4)
{
    int v4;
    int v1;
    int v3;
    v1 = (int)((int)o->f10 + -1);
    v3 = (int)0;
    while (o->f10 > v3) {
        v4 = (int)(o->f0c->f00 >> (v1 - v3 << 2) & 0xf);
        if ((v1 - (int)o->f04) == v3) {
            njPrintColor_8c38c5b6(a4.f00);
            call_8c38cc32((int)(a1 << 0x10 | a2), v4, 1);
        } else {
            njPrintColor_8c38c5b6(a3);
            call_8c38cc32((int)(a1 << 0x10 | a2), v4, 1);
        }
        a1 = (int)(a1 + 1);
        v3 = (int)(v3 + 1);
    }
}
