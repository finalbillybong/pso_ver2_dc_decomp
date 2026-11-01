/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c027d54
 * function: operation_8c027d54
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 20 of 174 reference instruction lines
 * differing bytes: 19
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct B80 {
    int w[20];
} B80;
typedef struct B72 {
    int w[18];
} B72;
typedef struct Save {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    char pad04[3];
    unsigned char f07;
} Save;
typedef struct Player {
    char pad000[0x350];
    int f350;
    char pad354[0x5c];
    int f3b0;
    char pad3b4[0x50];
    char f404[0x13];
    char pad417[0xa9];
    B72 f4c0;
    char pad508[0x2dc];
    B80 f7e4;
    char pad834[0x394];
    void *fbc8;
} Player;
extern Save *g_8c4db9e0;
#define operation_8c16ac98 ((int (*)(void *, void *))0x8c16ac98)
#define operation_8c16a618 ((void (*)(void *, Player *))0x8c16a618)
#define operation_8c1a7128 ((int (*)(Player *))0x8c1a7128)
#define operation_8c02c390 ((void (*)(Player *, void *, int))0x8c02c390)
#define call_8c04a838 ((unsigned char (*)(Player *))0x8c04a838)
#define call_8c04a900 ((unsigned char (*)(Player *))0x8c04a900)
#define split14_8c247870 ((void (*)(char, void *, void *))0x8c247870)
#define operation_8c02ca48 ((void (*)(Player *, Save *))0x8c02ca48)
int call_8c027d68(Save *a0);
void operation_8c027d54(void)
{
    call_8c027d68(g_8c4db9e0);
}
int call_8c027d68(Save *a0)
{
    int i;
    Player *p;
    int *q;
    short j;
    int flag;
    int k8;
    int k4;
    if (*(int *)0x8c418248 == 0xffff) {
        p = 0;
    } else if (*(int *)0x8c418248 >= 12) {
        p = 0;
    } else {
        p = *(Player **)((*(int *)0x8c418248 << 2) + 0x8c41ce2c);
    }
    if (p == 0) {
        return 0;
    }
    q = (int *)0x8c004000;
    flag = 0x1000;
    for (j = 0; j < (unsigned int)flag; j++) {
        if (*q++ != 0) {
            p->f3b0 |= 1;
            break;
        }
    }
    *(int *)((char *)p + 0x350) |= 0x800000;
    *(B80 *)((char *)a0 + 0x370) = p->f7e4;
    a0->f00 = p->fbc8 == 0 ? 0 : operation_8c16ac98(p->fbc8, (char *)a0 + 4);
    operation_8c16a618(p->fbc8, p);
    operation_8c02c390(p, (char *)a0 + 0x34c, operation_8c1a7128(p));
    a0->f01 = call_8c04a838(p);
    a0->f02 = call_8c04a900(p);
    *(B72 *)((char *)a0 + 0x3c0) = p->f4c0;
    k8 = 0x408;
    k4 = 0x404;
    for (i = 0; i < 0x13; i++) {
        split14_8c247870(((char *)p + k4)[(short)i], (char *)a0 + i + k8, (char *)a0 + i * 0x1c + 6);
    }
    a0->f03 = *(int *)0x8c467188;
    flag = 1;
    if (*(int *)0x8c470344 == 0 && *(int *)0x8c470348 == 0) {
        flag = 0;
    }
    if (flag) {
        a0->f07 |= 0x40;
    }
    operation_8c02ca48(p, a0);
    p->f350 &= 0xff7fffff;
    return 1;
}
