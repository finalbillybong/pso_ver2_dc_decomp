/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16c648
 * function: operation_8c16c648
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 12 of 45 reference instruction lines
 * differing bytes: 6
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
    char unknown2[0x2];
};
extern int g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern void memcpy_8c12b77c(Frame *, int, int);
void operation_8c16c648(int a0)
{
    Frame frame;
    void (*h)(char, char, unsigned short);
    char *buf;
    char b1;
    char b2;
    h = *(void (**)(char, char, unsigned short))((char *)&g_8c317ba8.f04 + (a0 << 3));
    buf = (char *)g_8c4db400;
    b1 = buf[g_8c4db420++];
    b2 = buf[g_8c4db420++];
    memcpy_8c12b77c(&frame, (int)(buf + g_8c4db420), 2);
    g_8c4db420 += 2;
    h(b1, b2, frame.f00);
}
