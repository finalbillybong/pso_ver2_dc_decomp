/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e86c0
 * function: operation_8c0e86c0
 * language: c
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 42 of 117 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: suspect on offline start: new character to Pioneer 2 (2 bytes differ, I/O equal); not
 *   proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Colour2 {
    int f00;
    int f04;
} Colour2;
typedef struct Frame {
    float f08;
    int f0c;
    char unknown10[0x4];
    float f14;
    float f18;
    float f1c;
    float f20;
    float *f24;
    Colour2 *f28;
    int f2c;
    int f30;
} Frame;
typedef struct Step {
    int angle;
    float len;
} Step;
typedef struct Stroke {
    float a;
    float b;
    Step *steps;
} Stroke;
typedef struct Object {
    float x;
    float s;
    float y;
} Object;
extern void restore_child_blend(void);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void draw_dispatch_8c38e2d0(void *, int, int, float);
void operation_8c0e86c0(Object *o, Stroke *a1, float f0, float f1)
{
    Frame frame;
    Step *p;
    float y;
    float len;
    float d;
    float x;
    float s;
    frame.f24 = &frame.f14;
    frame.f28 = (Colour2 *)&frame.f0c;
    frame.f2c = 0;
    frame.f28->f00 = 0xff2a6c93;
    frame.f28->f04 = frame.f28->f00;
    frame.f30 = 2;
    restore_child_blend();
    for (; (p = a1->steps) != 0; a1++) {
        len = (a1->a + a1->b) * f0 - a1->a;
        y = o->y;
        frame.f08 = o->x;
        for (; p->len > 0.0f && len > 0.0f; p++) {
            frame.f14 = frame.f08;
            frame.f18 = y;
            d = p->len;
            if (d > len) {
                d = len;
            }
            len -= d;
            x = d * njCos_8c38c154(p->angle) + frame.f08;
            frame.f08 = x;
            s = njSin_8c37eb0c(p->angle);
            frame.f1c = x;
            y = d * s + y;
            frame.f20 = y;
            draw_dispatch_8c38e2d0(&frame.f24, 2, 0, f1);
        }
    }
}
