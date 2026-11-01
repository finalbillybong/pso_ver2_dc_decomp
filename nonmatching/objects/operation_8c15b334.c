/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15b334
 * function: operation_8c15b334
 * language: c
 * reference size: 276 bytes
 * compiled size: 280 bytes (+1.4%)
 * differing lines: 84 of 129 reference instruction lines
 * differing bytes: 249
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Pair {
    char f00;
    char f01;
} Pair;
typedef struct Object {
    unsigned char tag;
    char f01;
    char f02;
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
extern int call_8c15b748(Object *, int);
extern int operation_8c15ba54(void);
int operation_8c15b334(Object *o, int a1)
{
    int i;
    int off;
    int f;
    if (call_8c15b748(o, a1) != 0) {
        return 1;
    }
    if (operation_8c15ba54() == 0) {
        return 0;
    }
    for (i = 0; i < 0x3c; i++) {
        off = i * 0x18;
        f = *(short *)((char *)(g_8c4dab80 + 0x16) + off) == 0;
        if (f != 0) {
            *(unsigned char *)(g_8c4dab80 + off) = o->tag;
            *(char *)((char *)(g_8c4dab80 + 0x1) + off) = o->f01;
            *(char *)((char *)(g_8c4dab80 + 0x2) + off) = o->f02;
            *(char *)((char *)(g_8c4dab80 + 0x3) + off) = o->f03;
            *(char *)((char *)(g_8c4dab80 + 0x4) + off) = o->f04;
            *(char *)((char *)(g_8c4dab80 + 0x5) + off) = o->f05;
            *(Pair *)((char *)(g_8c4dab80 + 0x6) + off) = o->f06;
            *(Pair *)((char *)(g_8c4dab80 + 0x8) + off) = o->f08;
            *(Pair *)((char *)(g_8c4dab80 + 0xa) + off) = o->f0a;
            *(int *)((char *)(g_8c4dab80 + 0xc) + off) = o->f0c;
            *(int *)((char *)(g_8c4dab80 + 0x10) + off) = o->f10;
            *(short *)((char *)(g_8c4dab80 + 0x14) + off) = 1;
            *(short *)((char *)(g_8c4dab80 + 0x16) + off) = 1;
            g_8c4db120++;
            return 1;
        }
    }
    return 0;
}
