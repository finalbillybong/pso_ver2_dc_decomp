/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1877a4
 * function: operation_8c1877a4
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 18 of 48 reference instruction lines
 * differing bytes: 18
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
typedef struct S_L8c319b78 S_L8c319b78;
typedef struct Frame Frame;
struct S_L8c319b78 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    unsigned short f00;
    unsigned short f02;
};
extern int g_8c4dbc00;
extern int g_8c4dbc04;
extern S_L8c319b78 g_8c319b78;
extern void memcpy_8c12b77c(void *, int, int);
void operation_8c1877a4(int a0)
{
    char *v1;
    Frame frame;
    int v2;
    v1 = (char *)*(int *)((char *)&g_8c319b78.f04 + ((unsigned char)a0 << 3));
    memcpy_8c12b77c(&frame.f02, g_8c4dbc00 + g_8c4dbc04, 2);
    v2 = frame.f02;
    g_8c4dbc04 += 2;
    memcpy_8c12b77c(&frame, g_8c4dbc00 + g_8c4dbc04, 2);
    g_8c4dbc04 += 2;
    ((void (*)(int, unsigned short))v1)(v2, frame.f00);
}
