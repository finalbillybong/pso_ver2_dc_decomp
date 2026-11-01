/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23888c
 * function: operation_8c23888c
 * language: c
 * reference size: 524 bytes
 * compiled size: 524 bytes (+0.0%)
 * differing lines: 8 of 230 reference instruction lines
 * differing bytes: 11
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Frame {
    int f00;
    int f04;
    int f08;
    int f0c;
    char f10[0xc];
    int f1c;
    int f20;
    char f24[0xc];
    int f30;
} Frame;
typedef struct Rec {
    char unknown0[0x4];
    char f04[0xc];
    char unknown10[0x8];
    int f18;
    char unknown1c[0x5c];
    int f78[1];
} Rec;
typedef struct Table {
    int f00;
} Table;
extern Table g_8c339ca0;
extern int g_8c418248;
extern char *g_8c4db9e4;
extern void operation_8c238c10(void);
extern int operation_8c247bac(void);
extern int operation_8c247e8c(int);
extern int operation_8c238e7c(int);
extern int operation_8c238dcc(int);
extern int operation_8c2382b0(void);
extern void operation_8c238500(void *, void *, int);
extern void TObjResultWin_create_8c259140(Frame *);
#define DECODE(id, v, hi) { int t_ = operation_8c247e8c(hi); if (t_ < 4 || t_ > 0xc) { id = -1; } else { id = (unsigned short)(hi ^ v); } }
int operation_8c23888c(int a0)
{
    Frame frame;
    int n;
    int result;
    int mask;
    Rec *base;
    int v1;
    int h1;
    int id1;
    int k;
    int v2;
    int h2;
    int id2;
    Rec *p;
    int v3;
    int h3;
    int id3;
    int v4;
    int h4;
    int id4;
    Rec *q;
    int v5;
    int h5;
    int id5;
    result = -4;
    operation_8c238c10();
    n = operation_8c247bac();
    if (n != 0) {
        base = (Rec *)(g_8c4db9e4 + 0x11c4);
        v1 = *(int *)((char *)base + (g_8c339ca0.f00 << 2) + 0x78);
        if (v1 == 0) {
            id1 = 0;
        } else {
            mask = 0xffff;
            h1 = (v1 >> 16) & mask;
            DECODE(id1, v1, h1);
            if (operation_8c238e7c(id1) != 0) {
                id1 = 0;
            }
        }
        n = n - id1 + a0;
        result = operation_8c238dcc(n);
        v2 = base->f18;
        k = result + 1;
        mask = 0xffff;
        h2 = (v2 >> 16) & mask;
        DECODE(id2, v2, h2);
        if (id2 < 0) {
            id2 = 0;
        }
        if (k > id2) {
            int r = operation_8c2382b0();
            base->f18 = r ^ (unsigned short)k | r << 16;
        }
    }
    frame.f00 = g_8c339ca0.f00;
    p = (Rec *)((char *)&g_8c339ca0 + g_8c418248 * 0xa4 + 0x278);
    frame.f04 = 0;
    frame.f08 = n;
    v3 = *(int *)((char *)p + (g_8c339ca0.f00 << 2) + 0x78);
    if (v3 == 0) {
        id3 = 0;
    } else {
        mask = 0xffff;
        h3 = (v3 >> 16) & mask;
        DECODE(id3, v3, h3);
        if (operation_8c238e7c(id3) != 0) {
            id3 = 0;
        }
    }
    frame.f0c = id3;
    operation_8c238500(frame.f10, p->f04, 0xc);
    v4 = p->f18;
    mask = 0xffff;
    h4 = (v4 >> 16) & mask;
    DECODE(id4, v4, h4);
    if (id4 < 0) {
        id4 = 0;
    }
    frame.f1c = id4;
    frame.f20 = a0;
    q = (Rec *)(g_8c4db9e4 + 0x11c4);
    operation_8c238500(frame.f24, q->f04, 0xc);
    v5 = q->f18;
    h5 = (unsigned short)(v5 >> 16);
    DECODE(id5, v5, h5);
    if (id5 < 0) {
        id5 = 0;
    }
    frame.f30 = id5;
    TObjResultWin_create_8c259140(&frame);
    if (n == 0) {
        return -1;
    }
    return result;
}
