/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0156e4
 * function: operation_8c0156e4
 * language: c
 * reference size: 976 bytes
 * compiled size: 968 bytes (-0.8%)
 * differing lines: 257 of 274 reference instruction lines
 * differing bytes: 689
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in code
 *   generation (unclassified); review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    char data[0xc];
} Frame;
typedef struct Pick {
    int f00;
    int f04;
    int f08;
    int f0c;
} Pick;
extern void reset_controller_state_8c01d9dc(void);
extern void call_8c36d3ca(Frame *);
extern void call_8c36d4c0(Frame *, void *);
extern void *heap_alloc_8c122700(void *, unsigned int);
extern void operation_8c01b56c(void *, int);
extern int operation_8c036640(void);
extern int operation_8c036684(void);
extern void operation_8c016eb8(int);
extern int operation_8c03f95c(void);
extern int operation_8c01c434(void);
extern int operation_8c02fe0c(void *, int, int, int, int, int, int);
static inline int pick(Pick *t)
{
    if (operation_8c01c434() == 0) {
        return operation_8c02fe0c(*(void **)0x8c418a00, 0x8c513400, 0x8c513408, 0x8c4e3120, 0x8c4e3128, t->f00, t->f04);
    }
    return operation_8c02fe0c(*(void **)0x8c418a00, 0x8c513400, 0x8c513408, 0x8c4e3120, 0x8c4e3128, t->f08, t->f0c);
}
void operation_8c0156e4(int a0)
{
    Frame frame;
    void *p;
    int r;
    reset_controller_state_8c01d9dc();
    call_8c36d3ca(&frame);
    call_8c36d4c0(&frame, (void *)0x8c41bcec);
    p = heap_alloc_8c122700(*(void **)0x8c4d97e0, 0x30);
    if (p != 0) {
        operation_8c01b56c(p, a0);
    }
    *(int *)0x8c41bce8 = 1;
    switch (operation_8c036640()) {
    case 0:
        if (operation_8c036684() == 3) {
            operation_8c016eb8(0x15);
            return;
        }
        break;
    case 1:
        operation_8c016eb8(0x16);
        return;
    case 2:
        operation_8c016eb8(0x17);
        return;
    case 3:
        operation_8c016eb8(0x18);
        return;
    case 4:
        operation_8c016eb8(0x19);
        return;
    case 5:
    case 6:
        operation_8c016eb8(0x15);
        return;
    case 9:
        operation_8c016eb8(0x1c);
        return;
    case 16:
        operation_8c016eb8(0x1d);
        return;
    case 17:
        operation_8c016eb8(0x1e);
        return;
    case -7:
    default:
        operation_8c016eb8(0x1d);
        return;
    case 7:
    case 8:
        break;
    }
    switch ((char)operation_8c03f95c()) {
    case 0:
    case 1:
        r = pick((Pick *)0x8c2e2f24);
        if (r != 0) {
            goto handle;
        }
        return;
    case 2:
        r = pick((Pick *)0x8c2e2f34);
        if (r != 0) {
            goto handle;
        }
        return;
    case 3:
    case 4:
    default:
        r = pick((Pick *)0x8c2e2f44);
        if (r != 0) {
        handle:
            switch (r) {
            case 0:
                return;
            case 1:
                operation_8c016eb8(8);
                break;
            case 2:
                operation_8c016eb8(9);
                break;
            default:
                operation_8c016eb8(8);
                break;
            }
        }
        return;
    }
}
