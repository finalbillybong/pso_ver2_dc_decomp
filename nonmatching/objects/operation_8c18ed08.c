/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18ed08
 * function: operation_8c18ed08
 * language: c
 * reference size: 248 bytes
 * compiled size: 252 bytes (+1.6%)
 * differing lines: 56 of 106 reference instruction lines
 * differing bytes: 223
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbf40 S_g8c4dbf40;
extern S_g8c4dbf40 *g_8c4dbf40;
extern char g_8c31a100[];
extern int call_8c18e808(int, int);
extern int call_8c18e954(int, int);
extern int operation_8c257e3c(int, unsigned int);
extern void strncpy_8c12b154(void *, void *, int);
extern void call_8c18ec00(int, int);
void operation_8c18ed08(int a0)
{
    int x;
    int m;
    int sec;
    x = call_8c18e808(a0, 0xe10);
    a0 = call_8c18e954(a0, 0xe10);
    if ((unsigned int)x > 0x63) {
        x = operation_8c257e3c((int)g_8c31a100, 0xff);
        strncpy_8c12b154(g_8c4dbf40, g_8c31a100, x);
        ((char *)g_8c4dbf40)[x] = 0;
        g_8c4dbf40 = (S_g8c4dbf40 *)((int)g_8c4dbf40 + x);
        return;
    }
    call_8c18ec00(x, 2);
    x = operation_8c257e3c((int)(g_8c31a100 + 0x9), 0xff);
    strncpy_8c12b154(g_8c4dbf40, g_8c31a100 + 0x9, x);
    ((char *)g_8c4dbf40)[x] = 0;
    g_8c4dbf40 = (S_g8c4dbf40 *)((int)g_8c4dbf40 + x);
    m = call_8c18e808(a0, 0x3c);
    sec = call_8c18e954(a0, 0x3c);
    call_8c18ec00(m, 2);
    x = operation_8c257e3c((int)(g_8c31a100 + 0xb), 0xff);
    strncpy_8c12b154(g_8c4dbf40, g_8c31a100 + 0xb, x);
    ((char *)g_8c4dbf40)[x] = 0;
    g_8c4dbf40 = (S_g8c4dbf40 *)((int)g_8c4dbf40 + x);
    call_8c18ec00(sec, 2);
}
