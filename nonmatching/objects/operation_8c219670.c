/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c219670
 * function: operation_8c219670
 * language: c
 * reference size: 452 bytes
 * compiled size: 444 bytes (-1.8%)
 * differing lines: 18 of 191 reference instruction lines
 * differing bytes: 140
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order; review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Tables {
    char unknown0[0x18];
    unsigned short *f18;
    unsigned char *f1c;
    unsigned char *f20;
} Tables;
typedef struct Slots {
    int *f00;
} Slots;
typedef struct Arg3 {
    unsigned char f00;
    unsigned char f01;
    char unknown2[0xe];
    int f10;
} Arg3;
extern Tables *g_8c50590c;
extern Slots *g_8c505910;
extern void operation_1c7dd4(void *);
extern int operation_8c219834(int, int, unsigned int);
extern int operation_8c219df0(int);
extern int call_8c218d6c(int, int *, Arg3 *);
extern int operation_8c219e2c(int);
extern void call_8c219308(int, int, Arg3 *);
void operation_8c219670(int a0, int a1, int a2, Arg3 *a3)
{
    int r;
    int v;
    unsigned char k;
    unsigned int lo;
    unsigned int hi;
    unsigned short val;
    if (a3 == 0) {
        return;
    }
    operation_1c7dd4(a3);
    if (!(0x33 >= a1)) {
        return;
    }
    r = operation_8c219834(a0, 0x64, 0);
    if (!(g_8c50590c->f1c[a1] > (unsigned int)r)) {
        return;
    }
    if (operation_8c219df0(a0) == 1 && g_8c505910 != 0 && a1 > 0 && 0x33 > a1) {
        r = call_8c218d6c(a0, (int *)((char *)g_8c505910->f00 + (a1 << 2)), a3);
    } else {
        r = 0;
    }
    if (r != 0) {
        return;
    }
    if (operation_8c219e2c(a0) == 1) {
        v = operation_8c219834(a0, 3, 1);
    } else {
        v = operation_8c219834(a0, 2, 1) + 1;
    }
    switch (v) {
    case 0:
        k = 5;
        break;
    case 1:
        k = 4;
        break;
    case 2:
        k = g_8c50590c->f20[a1];
        break;
    default:
        return;
    }
    switch (k) {
    case 0:
        a3->f00 = 0;
        break;
    case 1:
        a3->f00 = 1;
        a3->f01 = 1;
        break;
    case 2:
        a3->f00 = 1;
        a3->f01 = 2;
        break;
    case 3:
        a3->f00 = 1;
        a3->f01 = 3;
        break;
    case 4:
        a3->f00 = 3;
        break;
    case 5:
        a3->f00 = 4;
        a1 <<= 1;
        a1 <<= 1;
        val = *(unsigned short *)((char *)g_8c50590c->f18 + a1);
        hi = *(unsigned short *)((char *)(g_8c50590c->f18 + 1) + a1);
        lo = val;
        if (lo == 0xff || hi == 0xff || lo > hi) {
            val = 0xff;
        } else if (lo != hi) {
            val = operation_8c219834(a0, hi - lo + 1, 5) + lo;
        }
        a3->f10 = val;
        break;
    default:
        return;
    }
    if (a3->f00 != 4) {
        call_8c219308(a0, a2, a3);
    }
}
