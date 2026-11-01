/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16c730
 * function: operation_8c16c730
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 30 of 55 reference instruction lines
 * differing bytes: 25
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
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    unsigned short f00;
    char unknown2[0x12];
};
extern int g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern void memcpy_8c12b77c(Frame *, int, int);
void operation_8c16c730(int a0)
{
    Frame frame;
    unsigned char v4;
    int v1;
    int v5;
    int v3;
    int v6;
    int v2;
    int id;
    char *p;
    v1 = (int)*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3));
    memcpy_8c12b77c((Frame *)((&frame)), (int)(g_8c4db400 + g_8c4db420), 2);
    v2 = (int)g_8c4db400;
    v5 = 0;
    v3 = (int)(g_8c4db420 + 2);
    id = (unsigned short)(&frame)->f00;
    g_8c4db420 = v3 + 1;
    v4 = *(char *)((char *)v2 + v3);
    p = (char *)(&frame) + 0x2;
    while (v4 > v5) {
        v6 = (int)g_8c4db420;
        g_8c4db420 = v6 + 1;
        *(char *)((char *)v5 + (int)p) = *(char *)((char *)v2 + v6);
        v5 = (int)(v5 + 1);
    }
    ((void (*)(int, int, void *, int))(v1))(id, v4, (void *)(((char *)(&frame) + 0x2)), v5);
}
