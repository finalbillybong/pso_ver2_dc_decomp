/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c218d6c
 * function: operation_8c218d6c
 * language: c
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 4 of 114 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    unsigned char f00;
    char f01;
    char f02;
    char f03;
};
struct Arg2 {
    unsigned char f00;
    char f01;
    char f02;
};
extern int operation_8c219834(void *, int, unsigned int);
extern void operation_8c218fa8(int, void *, int);
extern void call_8c218ff4(int, Arg2 *, int);
extern void operation_8c219100(int, void *);
extern void operation_8c2191ec(int, void *);
extern void operation_8c219284(int, void *);
extern void operation_8c2192d8(int, void *);
extern void operation_8c2192b8(int, void *);
int operation_8c218d6c(int a0, Arg1 *a1, Arg2 *a2)
{
    unsigned char v1;
    int t1;
    int t2;
    int pm5;
    int v2;
    char pm8;
    int t3;
    int pm4;
    int pm9;
    int pm10;
    int pm6;
    if (a1 != 0 && 0 != a2) {
        unsigned char pm7;
        pm7 = a1->f00;
        v1 = (int)pm7;
        if (0 != (int)v1) {
            pm10 = operation_8c219834((void *)a0, -1, (unsigned int)6);
            t1 = pm10;
            pm4 = v1 >> 1;
            v2 = (int)((pm4 >> 1 >> 1) + -4);
            pm4 = v1 >> 1;
            pm5 = pm4 >> 1 >> 1;
            pm6 = v1;
            if (!(((pm5) + -4) >= 0)) {
                pm5 = 0;
                v2 = pm5;
            }
            if ((unsigned int)(((2 << v2) * (7 + (7 & pm6)))) > (unsigned int)t1) {
                pm8 = a1->f01;
                a2->f00 = (unsigned char)pm8;
                a2->f01 = a1->f02;
                a2->f02 = (int)a1->f03;
                switch ((int)((unsigned char)a2->f00)) {
                    case 0:
                    t2 = operation_8c219834((void *)a0, 5, (unsigned int)7);
                    operation_8c218fa8(a0, (void *)a2, t2);
                    t3 = 0xa;
                    t3 = operation_8c219834((void *)a0, t3, 7);
                    call_8c218ff4(a0, a2, t3);
                    operation_8c219100(a0, (void *)a2);
                    break;
                    case 1:
                    operation_8c2191ec(a0, (void *)a2);
                    break;
                    case 2:
                    operation_8c219284(a0, (void *)a2);
                    break;
                    case 3:
                    operation_8c2192d8(a0, (void *)a2);
                    operation_8c2192b8(a0, (void *)a2);
                }
                return 1;
            }
        }
    }
    return 0;
}
