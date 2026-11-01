/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c151850
 * function: operation_8c151850
 * language: c
 * reference size: 232 bytes
 * compiled size: 228 bytes (-1.7%)
 * differing lines: 4 of 85 reference instruction lines
 * differing bytes: 137
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
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x26];
    short f358;
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x2];
    short f3aa;
    short f3ac;
};
extern void play_se_8c05fbf8(int, void *, int, int);
extern void call_8c151adc(Object *);
void operation_8c151850(Object *o)
{
    short v1;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        *(int *)((char *)o + 0x3a4) |= 1;
        o->f3ac = 3;
        o->f3aa = 0;
        o->f3a4 |= 0x10000;
        play_se_8c05fbf8(0x30003, (void *)(((char *)o + 0x3c)), 0, 0);
        call_8c151adc(o);
        v1 = o->f330;
        o->f35a = v1;
        o->f358 = 3;
        o->f398 = 1;
        break;
    case 1:
        if (!((short)--o->f358 > 0)) {
            o->f34 &= -0x200201;
            if (((o->f3a4 & 1)) == 0) {
                v1 = (short)o->f30a;
                if (v1 != 0) {
                    o->f39c = (int)(v1);
                    o->f390 = 0;
                }
            }
            o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        }
    }
}
