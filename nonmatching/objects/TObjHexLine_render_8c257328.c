/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c257328
 * function: TObjHexLine_render_8c257328
 * language: c
 * reference size: 376 bytes
 * compiled size: 376 bytes (+0.0%)
 * differing lines: 26 of 171 reference instruction lines
 * differing bytes: 46
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjHexLine.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Pair {
    float x;
    float y;
} Pair;
typedef struct Frame {
    Pair a;
    Pair b;
    Pair c;
    Pair d;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30[32];
    Pair fb0[32];
} Frame;
typedef struct Object {
    char unknown0[0x20];
    int f20[32];
    float fa0;
} Object;
extern char g_8c33ff6c[];
extern void call_8c256f3c(void *, void *);
extern void draw_dispatch_8c38e2d0(void *, int, int, float);
void TObjHexLine_render_8c257328(Object *o)
{
    Frame frame;
    int n;
    int i;
    Pair *pd;
    Pair *pb;
    int m;
    int last;
    pd = &frame.d;
    pb = &frame.b;
    n = (int)*(float *)(g_8c33ff6c + 0xc);
    i = 0;
    m = -1;
    while (n > i) {
        last = n + m;
        if (i == 0) {
            call_8c256f3c(&frame.c, (char *)o + 0x20);
            call_8c256f3c(pd, (char *)o + 0x24);
            {
                float bx = frame.d.x;
                float by = frame.d.y;
                frame.fb0[0].x = (frame.c.x - bx) * o->fa0 + bx;
                frame.fb0[0].y = (frame.c.y - by) * o->fa0 + by;
            }
        } else if (i == last) {
            call_8c256f3c(&frame.a, (char *)o + (last + m << 2) + 0x20);
            call_8c256f3c(pb, (char *)o + (last << 2) + 0x20);
            {
                float bx = frame.b.x;
                float by;
                last = last << 3;
                *(float *)(last + (char *)&frame.fb0[0].x) = (frame.a.x - bx) * o->fa0 + bx;
                by = frame.b.y;
                *(float *)(last + (char *)&frame.fb0[0].y) = (frame.a.y - by) * o->fa0 + by;
            }
        } else {
            call_8c256f3c((i << 3) + (char *)&frame.fb0[0], (char *)o + (i << 2) + 0x20);
        }
        *(int *)((char *)frame.f30 + (i << 2)) = 0x20ffffff;
        i = i + 1;
    }
    frame.f20 = (int)frame.fb0;
    frame.f24 = (int)frame.f30;
    frame.f28 = 0;
    frame.f2c = n;
    draw_dispatch_8c38e2d0(&frame.f20, n, 0x42, -100.0f);
}
