/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2386e8
 * function: operation_8c2386e8
 * language: c
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 56 of 182 reference instruction lines
 * differing bytes: 35
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
    char unknown10[0x4];
    int f14;
    int f18;
    char unknown1c[0x80];
    int f9c;
} Rec;
extern int g_8c418248;
extern char *g_8c4db9e4;
extern char g_8c339ca0[];
extern void call_8c238a98(void);
extern int operation_8c238dcc(int);
extern int operation_8c247e8c(int);
extern int operation_8c238e7c(int);
extern void operation_8c238500(void *, void *, int);
extern void TObjResultWin_create_8c259140(Frame *);
#define DECODE(id, v, hi) { int t_ = operation_8c247e8c(hi); if (t_ < 4 || t_ > 0xc) { id = -1; } else { id = (unsigned short)(hi ^ v); } }
int operation_8c2386e8(int a0)
{
    Frame frame;
    int v1;
    Rec *p;
    int *q;
    int v6;
    int h1;
    int id1;
    int h6;
    int id6;
    int v10;
    int h10;
    int id10;
    int v19;
    int h19;
    int id19;
    Rec *p2;
    int v25;
    int h25;
    int id25;
    int result;
    int mask;
    call_8c238a98();
    result = operation_8c238dcc(a0);
    frame.f00 = 9;
    mask = 0xffff;
    v1 = *(int *)(g_8c339ca0 + 0x14);
    h1 = (v1 >> 16) & mask;
    DECODE(id1, v1, h1);
    frame.f04 = id1;
    frame.f08 = 0;
    p = (Rec *)(g_8c339ca0 + g_8c418248 * 0xa4 + 0x278);
    q = &p->f9c;
    v6 = p->f14;
    h6 = (unsigned short)(v6 >> 16);
    DECODE(id6, v6, h6);
    if (frame.f04 == id6) {
        v10 = *q;
        if (v10 == 0) {
            id10 = 0;
        } else {
            h10 = (unsigned short)(v10 >> 16);
            DECODE(id10, v10, h10);
            if (operation_8c238e7c(id10) != 0) {
                id10 = 0;
            }
        }
        frame.f0c = id10;
    } else {
        frame.f0c = 0;
    }
    operation_8c238500(frame.f10, p->f04, 0xc);
    v19 = p->f18;
    h19 = (unsigned short)(v19 >> 16);
    DECODE(id19, v19, h19);
    if (id19 < 0) {
        id19 = 0;
    }
    frame.f1c = id19;
    frame.f20 = a0;
    p2 = (Rec *)(g_8c4db9e4 + 0x11c4);
    operation_8c238500(frame.f24, p2->f04, 0xc);
    v25 = p2->f18;
    h25 = (unsigned short)(v25 >> 16);
    DECODE(id25, v25, h25);
    if (id25 < 0) {
        id25 = 0;
    }
    frame.f30 = id25;
    TObjResultWin_create_8c259140(&frame);
    return result;
}
