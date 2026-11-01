/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15b748
 * function: operation_8c15b748
 * language: c
 * reference size: 388 bytes
 * compiled size: 344 bytes (-11.3%)
 * differing lines: 185 of 187 reference instruction lines
 * differing bytes: 361
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -44 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Pair {
    char f00;
    char f01;
} Pair;
typedef struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char f03;
    char f04;
    char f05;
    Pair f06;
    Pair f08;
    Pair f0a;
    int f0c;
    int f10;
} Object;
extern int g_8c4db120;
extern char g_8c4dab80[];
extern int operation_8c1ccb10(void *);
int operation_8c15b748(Object *o, int a1)
{
    int i;
    int off;
    int f;
    int k;
    int j;
    int off2;
    int f2;
    char *p;
    char *q;
    if (o->tag != 3) {
        return 0;
    }
    if (operation_8c1ccb10(o) == 0) {
        return 0;
    }
    for (i = 0; i < 0x3c; i++) {
        off = i * 0x18;
        f = *(short *)((char *)(g_8c4dab80 + 0x16) + off) == 0;
        if (f == 0 && o->tag == *(unsigned char *)(g_8c4dab80 + off) && *(unsigned char *)((char *)(g_8c4dab80 + 0x1) + off) == o->f01 && *(unsigned char *)((char *)(g_8c4dab80 + 0x2) + off) == o->f02) {
            *(short *)((char *)(g_8c4dab80 + 0x14) + off) += a1;
            return 1;
        }
    }
    p = g_8c4dab80;
    q = p + 0x16;
    k = 0x18;
    for (j = 0; j < 0x3c; j++) {
        off2 = j * k;
        f2 = *(short *)(q + off2) == 0;
        if (f2 != 0) {
            *(unsigned char *)(p + off2) = o->tag;
            *(char *)(p + 0x1 + off2) = o->f01;
            *(char *)(p + 0x2 + off2) = o->f02;
            *(char *)(p + 0x3 + off2) = o->f03;
            *(char *)(p + 0x4 + off2) = o->f04;
            *(char *)(p + 0x5 + off2) = o->f05;
            *(Pair *)(p + 0x6 + off2) = o->f06;
            *(Pair *)(p + 0x8 + off2) = o->f08;
            *(Pair *)(p + 0xa + off2) = o->f0a;
            *(int *)(p + 0xc + off2) = o->f0c;
            *(int *)(p + 0x10 + off2) = o->f10;
            *(short *)(p + 0x14 + off2) = 1;
            *(short *)(q + off2) = 1;
            *(short *)(p + 0x14 + off2) = a1;
            g_8c4db120++;
            return 1;
        }
    }
    return 0;
}
