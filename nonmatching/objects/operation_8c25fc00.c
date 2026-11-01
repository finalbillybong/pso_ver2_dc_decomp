/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25fc00
 * function: operation_8c25fc00
 * language: c
 * reference size: 212 bytes
 * compiled size: 212 bytes (+0.0%)
 * differing lines: 18 of 95 reference instruction lines
 * differing bytes: 126
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
struct S_vv3 {
    int f00;
    int f04;
    int f08;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern float float_from_bits(unsigned int);
extern int operation_8c25fcd4(void *, void *);
extern int float_to_bits(float);
void operation_8c25fc00(Object *o)
{
    Frame frame;
    S_vv3 *v3;
    int v4;
    int v7;
    int v8;
    int v5;
    int v1;
    int v6;
    int v2;
    float t1;
    float t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v1 = (int)0xffff;
    v3 = (S_vv3 *)o->f24;
    v4 = (int)0;
    v2 = (int)0x3e8;
    while (v2 > v4) {
        switch ((unsigned char)v3->f00) {
        case 41:
            v5 = (int)3;
            break;
        case 44:
            v5 = (int)4;
            break;
        default:
            v6 = (int)-1;
            v5 = (int)v6;
            break;
        }
        if (!(v5 >= 0)) {
            break;
        }
        v7 = (int)((short)((unsigned int)v3->f04 >> 0x10) & v1);
        v8 = (int)v7;
        v3 = (S_vv3 *)((char *)v3 + 8);
        while (v8 > 0) {
            t1 = float_from_bits((unsigned int)(v3->f00));
            (&frame)->f00 = t1;
            t2 = float_from_bits((unsigned int)(v3->f04));
            (&frame)->f04 = t2;
            t3 = float_from_bits((unsigned int)(v3->f08));
            (&frame)->f08 = t3;
            t4 = operation_8c25fcd4((void *)o, (void *)(&frame));
            if (t4 != 0) {
                t5 = float_to_bits((&frame)->f00);
                v3->f00 = (int)(t5);
                t6 = float_to_bits((&frame)->f04);
                v3->f04 = (int)(t6);
                t7 = float_to_bits((&frame)->f08);
                v3->f08 = (int)(t7);
            }
            v8 = (int)(v8 + -1);
            v3 = (S_vv3 *)&*(int *)((char *)&v3->f00 + (v5 + 3 << 2));
        }
        v4 = (int)(v4 + 1);
    }
}
