/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13b030
 * function: operation_8c13b030
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 4 of 115 reference instruction lines
 * differing bytes: 5
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
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0xc4];
    volatile unsigned short f1b6;
    char unknown1b8[0x152];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x3c];
    int f3e4;
};
extern volatile int g_8c418248;
extern void play_se_8c05fbf8(int, int, int, int);
extern void operation_8c0a1f60(int, float);
extern void operation_8c01c5f0(Object *);
extern void interrupt_state_8c13be60(int);
void operation_8c13b030(Object *o)
{
    short v7;
    int v6;
    switch (o->f398) {
    case 0:
        if (((o->f34 & 0x2000000)) != 0) {
            o->f3a4 |= 0x40000;
        }
        o->f34 &= -0x2200201;
        o->f35a = o->f330;
        o->ff0 = 3;
        play_se_8c05fbf8(0x3001f, 0, 0, 0);
        play_se_8c05fbf8(0x30020, 0, 0, 0);
        if (g_8c418248 == (o->f1b6 & 0xffff)) {
            operation_8c0a1f60(0x1e, 0.08f);
        }
        o->f3e4 = 0x14;
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        if (o->fec == 8) {
            return;
        }
        {
            int *pf1 = (int *)((char *)o + 0x3a4);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        if (((o->f3a4 & 0x40000)) != 0) {
            interrupt_state_8c13be60(0xf);
            return;
        }
        v6 = (int)o->f39c;
        if (((o->f3a4 & 1)) != 0) {
            return;
        }
        v7 = (short)o->f30a;
        if (v7 == v6) {
            return;
        }
        o->f39c = (int)(v7);
        o->f390 = (int)(v6);
        return;
    case -1:
        o->f3a4 &= -0x40001;
    }
}
