/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fb750
 * function: TObjEneSlimeTailAttack_update_8c0fb750
 * language: c
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 44 of 103 reference instruction lines
 * differing bytes: 49
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
typedef struct Arg0_390 Arg0_390;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a];
    float f40;
    char unknown44[0xa4];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x294];
    Arg0_390 *f390;
    int f394;
    char unknown398[0x4];
    float f39c;
    float f3a0;
    float f3a4;
    float f3a8;
};
struct Arg0_390 {
    char unknown0[0x3a0];
    int f3a0;
};
extern void operation_8c0fb864(Object *);
extern void operation_8c01c5f0(Object *);
void TObjEneSlimeTailAttack_update_8c0fb750(Object *o)
{
    int v1;
    int v3;
    int v5;
    if (o->f394 != 0) {
        operation_8c0fb864(o);
        operation_8c01c5f0(o);
        if (((o->fe8 & 0x10)) != 0) {
            o->f04 |= 1;
            return;
        }
        v1 = (int)o->f390->f3a0;
        v5 = 1;
        v3 = 1;
        if (v1 != 0xb && v1 != 0xc) {
            v3 = (int)0;
        }
        if (v3 == 0 && v1 != 0xd) {
            v5 = (int)0;
        }
        if (v5 == 0) {
            return;
        }
        o->f394 = 0;
        return;
    }
    o->ff8 += (7.0f - o->ff8) * 0.1f;
    o->f3a8 += -0.0333333351f;
    o->f40 += -0.0166666675f;
    o->f39c += 0.0666666701f;
    o->f3a0 += -0.0316666663f;
    o->f3a4 += 0.0666666701f;
    if (!(o->f3a0 > 0.05f)) {
        o->f04 |= 1;
    }
}
