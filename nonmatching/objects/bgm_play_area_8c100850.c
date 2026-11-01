/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c100850
 * function: bgm_play_area_8c100850
 * language: c
 * reference size: 404 bytes
 * compiled size: 400 bytes (-1.0%)
 * differing lines: 8 of 141 reference instruction lines
 * differing bytes: 178
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Count {
    short f00;
} Count;
typedef struct Desc {
    char unknown0[0x24];
    int f24;
    int f28;
    Count *f2c;
} Desc;
typedef struct IPair {
    int f00;
    int f04;
} IPair;
extern int g_8c4d51b4;
extern Desc *g_8c4d51b8;
extern int g_8c4d51c4;
extern void *g_8c4d51d4[2];
extern float g_8c4d5280[2];
extern int g_8c4d528c;
extern int g_8c4d518c;
extern int g_8c4d5190;
extern int g_8c4d5194;
extern int g_8c4d5278;
extern int g_8c4d525c;
extern int g_8c4d5258;
extern IPair g_8c4d5268;
extern int g_8c4d527c;
extern int g_8c4d51a8;
extern int g_8c4d51bc;
extern int g_8c4d51c0;
extern IPair g_8c4d5260;
extern char g_8c4d5290[];
extern void operation_8c100a9c(void);
extern void call_8c35049c(void *);
extern int operation_8c01c434(void);
extern void ADXF_LoadPartition_8c34ca46(int, Desc *, void *, int);
extern void ADXT_StartAfs_8c350e68(void *, int, int);
extern void call_8c350abc(void *, int);
extern void operation_8c060660(void);
extern void strncpy_8c12b154(void *, Desc *, int);
void bgm_play_area_8c100850(int a0)
{
    int i;
    int off;
    Desc *d;
    operation_8c100a9c();
    g_8c4d51b4 = a0;
    g_8c4d51b8 = *(Desc **)((char *)0x8c31d470 + (a0 << 2));
    g_8c4d51c4 = 0;
    for (i = 0; i < 2; i++) {
        off = i << 2;
        call_8c35049c(*(void **)((char *)g_8c4d51d4 + off));
        *(float *)((char *)g_8c4d5280 + off) = 0.0f;
    }
    g_8c4d528c = 0;
    g_8c4d518c = 1;
    g_8c4d5190 = 1;
    g_8c4d5268.f00 = g_8c4d5258 = g_8c4d525c = g_8c4d5278 = g_8c4d5194 = 0;
    g_8c4d5268.f04 = 0;
    g_8c4d527c = 0;
    if (operation_8c01c434() == 1) {
        g_8c4d51a8 = g_8c4d51b8->f28;
    } else {
        g_8c4d51a8 = g_8c4d51b8->f24;
    }
    d = g_8c4d51b8;
    g_8c4d5260.f00 = d->f2c->f00;
    g_8c4d5260.f04 = d->f2c->f00 + 1;
    g_8c4d51bc = 0;
    g_8c4d51c0 = 1;
    ADXF_LoadPartition_8c34ca46(0xbe, d, (void *)0x8c4d52d8, 0x40);
    ADXT_StartAfs_8c350e68(g_8c4d51d4[0], 0xbe, g_8c4d5260.f00);
    ADXT_StartAfs_8c350e68(g_8c4d51d4[1], 0xbe, g_8c4d5260.f04);
    call_8c350abc(g_8c4d51d4[0], 0);
    call_8c350abc(g_8c4d51d4[1], 1);
    operation_8c060660();
    strncpy_8c12b154(g_8c4d5290, g_8c4d51b8, 0x20);
    strncpy_8c12b154(g_8c4d5290 + 0x20, g_8c4d51b8, 0x20);
}
