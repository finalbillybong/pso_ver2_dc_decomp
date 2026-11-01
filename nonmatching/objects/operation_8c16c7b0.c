/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16c7b0
 * function: operation_8c16c7b0
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 40 of 65 reference instruction lines
 * differing bytes: 31
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
typedef struct S_L8c317ba8 S_L8c317ba8;
typedef struct Frame Frame;
typedef struct S_g8c4db400 S_g8c4db400;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    volatile unsigned short f00;
    char unknown2[0x22];
};
extern char *g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern void memcpy_8c12b77c(Frame *, int, int);
void operation_8c16c7b0(int a0)
{
    Frame frame;
    int v1;
    int n;
    int i;
    char c;
    v1 = *(int *)((char *)&g_8c317ba8.f04 + (a0 << 3));
    i = 0;
    c = g_8c4db400[g_8c4db420++];
    n = (unsigned char)g_8c4db400[g_8c4db420++];
    for (; i < n; i++) {
        memcpy_8c12b77c(&frame, (int)(g_8c4db400 + g_8c4db420), 2);
        g_8c4db420 += 2;
        *(short *)((char *)((char *)&frame + 0x2) + (i << 1)) = frame.f00 & 0xffff;
    }
    ((void (*)(char, int, void *))v1)(c, n, (char *)&frame + 0x2);
}
