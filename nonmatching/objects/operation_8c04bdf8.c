/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04bdf8
 * function: operation_8c04bdf8
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 18 of 62 reference instruction lines
 * differing bytes: 39
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
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg4 Arg4;
struct Arg4 {
    int f00;
};
struct Object {
    char unknown0[0x8];
    int f08;
    int f0c;
    char unknown10[0x4];
    int f14;
};
struct Arg2 {
    int f00;
};
struct Arg3 {
    int f00;
};
extern int operation_8c04b794(int);
extern int operation_8c04b8b0(int);
int operation_8c04bdf8(Object *o, int a1, Arg2 *a2, Arg3 *a3, register Arg4 *a4)
{
    unsigned int v4;
    int v5;
    int t1;
    int t2;
    t1 = operation_8c04b794(a1);
    a4->f00 += 1;
    if ((((unsigned short)t1 & 0xff00)) != 0) {
        a4->f00 += 1;
    }
    if ((unsigned int)a4->f00 > (unsigned int)o->f14) {
        return 1;
    }
    if (o->f0c == 0) {
        return 0;
    }
    t2 = operation_8c04b8b0(t1);
    a2->f00 += (unsigned char)t2;
    v4 = (unsigned int)a2->f00;
    if ((unsigned int)o->f08 >= v4) {
        return 0;
    }
    a3->f00 += 0x14;
    a2->f00 = (unsigned char)t2;
    v5 = (int)((unsigned int)a3->f00 >= (unsigned int)o->f0c);
    return (int)(v5);
}
