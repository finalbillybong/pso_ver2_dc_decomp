/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18de4c
 * function: operator_new_8c18de4c
 * language: c
 * reference size: 120 bytes
 * compiled size: 116 bytes (-3.3%)
 * differing lines: 6 of 45 reference instruction lines
 * differing bytes: 45
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills; review found and fixed behaviour defects of the generator draft; not proven
 *   equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv82 S_vv82;
struct Frame {
    char unknown0[0x4];
};
struct S_vv82 {
    void *f00;
};
extern char g_8c4dbe00;
extern int g_8c4dbe04;
extern void call_8c18e4d8(void *, S_vv82 *, void *);
extern int call_8c36cd20(int);
int operator_new_8c18de4c(int a0)
{
    S_vv82 frame;
    S_vv82 *v82 = &frame;
    int v80;
    int r;
    void (*fn)(void);
    v80 = a0;
    if (a0 == 0) {
        v80 = 1;
    }
    while ((r = call_8c36cd20(v80)) == 0) {
        fn = (void (*)(void))g_8c4dbe04;
        if (fn != 0) {
            fn();
        } else if (g_8c4dbe00 != 0) {
            v82->f00 = (void *)0x8c27268c;
            call_8c18e4d8((void *)0x8c31a0da, v82, (void *)0x8c18dec4);
        } else {
            return 0;
        }
    }
    return r;
}
