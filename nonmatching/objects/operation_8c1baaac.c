/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1baaac
 * function: operation_8c1baaac
 * language: c
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 14 of 150 reference instruction lines
 * differing bytes: 11
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
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x8];
    int f3a0;
    char unknown3a4[0x4];
    int f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0xc];
    volatile unsigned short f3c0;
    volatile unsigned short f3c2;
    int f3c4;
};
extern int ring_actor_eligible(unsigned short);
extern float object_random_fraction(void *);
extern void operation_8c1ae0d8(void *, int);
void operation_8c1baaac(Object *o)
{
    unsigned short v79;
    int v80;
    float t3;
    unsigned short v82;
    float pm6;
    int v81;
    float t2;
    short pm5;
    int pm4;
    int v20;
    v79 = o->f3c2;
    v82 = (unsigned short)0xffff;
    if ((v79 & 0xffff) != v82) {
        int t1;
        t1 = ring_actor_eligible((unsigned short)v79);
        if (t1 == 0) {
            o->f3c2 = o->f3c0 = 0xffff;
        }
    }
    if (o->f3a0 == 0) {
        *(int *)((char *)o + 0x3c4) += 1;
        pm4 = o->f3c4;
        if (!(pm4 >= 5)) {
            if (!(o->f3c4 >= 2)) {
                goto L_8c1bab64;
            }
            t2 = object_random_fraction((void *)o);
            pm6 = 0.5f;
            if (!(pm6 > t2)) {
                goto L_8c1bab64;
            }
        }
        if (!(o->f394 == 0)) {
            int pm7;
            v80 = (0xf & o->f3b0);
            v81 = (0x1f & o->f3a8);
            pm7 = 0xf;
            pm5 = 0x17;
            operation_8c1ae0d8((void *)(o->f394), ((0xffff & (int)o->f3c2 & 0xf) << 0x1b | (v81 << 0xa | (v81 << 5 | 9) | v80 << pm7 | v80 << 0x13 | ((int)(int)o->f3c0 & 0xffff & 0xf) << pm5)));
            return;
        L_8c1bab64:
            ;
            t3 = object_random_fraction((void *)o);
            v20 = (int)(t3 * 15.99f);
            if (o->f394 != 0) {
                operation_8c1ae0d8((void *)(o->f394), (int)((v20 & 0x1f) << 0xa | ((o->f3a8 & 0x1f) << 5 | 0xf) | (o->f3b0 & 0xf) << 0xf | (v20 & 0xf) << 0x13 | (0xffff & (int)(int)o->f3c0 & 0xf) << 0x17 | (o->f3c2 & 0xffff & 0xf) << 0x1b));
            }
        }
    }
}
