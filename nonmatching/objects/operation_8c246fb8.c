/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c246fb8
 * function: operation_8c246fb8
 * language: c
 * reference size: 764 bytes
 * compiled size: 764 bytes (+0.0%)
 * differing lines: 38 of 333 reference instruction lines
 * differing bytes: 29
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
typedef struct Vec2 {
    float x;
    float y;
} Vec2;
typedef struct Off {
    short x;
    short y;
} Off;
typedef struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0xa4];
    float fec;
    float ff0;
    float ff4;
    char unknownf8[0x168];
    int f260;
} Object;
typedef struct Frame {
    Off off;
    Vec2 p;
    Vec2 scr;
    Vector3 pos;
} Frame;
extern int operation_8c2472b4(Object *, Vec2 *, Vector3 *);
extern int operation_8c04b8dc(int);
extern float njSin_8c37eb0c(int);
extern int strlen_8c12b0cc(int);
extern void call_8c04b250(int, int, int, float, float, float);
extern Off g_8c33b004[8];
void operation_8c246fb8(Object *o)
{
    Frame frame;
    float w;
    float t;
    int col2;
    float x;
    float y;
    float s;
    int c;
    int col1;
    int i;
    int e;
    float yy;
    int j;
    int k;
    if (o->fec == 0.0f) {
        return;
    }
    frame.pos = o->f3c;
    frame.pos.y += 14.0f;
    if (operation_8c2472b4(o, &frame.scr, &frame.pos) == 0) {
        return;
    }
    w = 0.0f;
    k = 0x140;
    for (i = 0; i < 6; i++) {
        t = (unsigned int)operation_8c04b8dc((int)o + i * 0x30 + k);
        if (t > w) {
            w = t;
        }
    }
    w *= 0.5f;
    if (0.0f > frame.scr.x - w || frame.scr.x + w > 640.0f) {
        if (0.0f > (o->ff0 += -0.16666667f)) {
            o->ff0 = 0.0f;
        }
        if (0.0f > (o->ff4 += -0.016666668f)) {
            o->ff4 = 0.0f;
        }
    } else {
        if ((o->ff0 += 0.16666667f) > 1.0f) {
            o->ff0 = 1.0f;
        }
        if ((o->ff4 += 0.16666667f) > 1.0f) {
            o->ff4 = 1.0f;
        }
    }
    y = o->fec;
    x = y * o->ff0;
    y *= o->ff4;
    s = njSin_8c37eb0c(o->f260 << 8);
    c = (int)(s * 40.0f) + 0xc8;
    col1 = (unsigned int)((float)(unsigned int)c * x) << 24;
    col2 = (unsigned int)((float)(unsigned int)c * y) << 24 | 0xffffff;
    k = 0x140;
    for (i = 0; i < 6; i++) {
        *(Vec2 *)&frame.p = frame.scr;
        e = (int)o + i * 0x30 + k;
        if (strlen_8c12b0cc(e) != 0) {
            frame.p.x -= (float)(unsigned int)operation_8c04b8dc(e) * 0.5f;
            if (x > 0.0f) {
                yy = frame.p.y;
                for (j = 0; j < 8; j++) {
                    frame.off = *(Off *)((char *)g_8c33b004 + (j << 2));
                    call_8c04b250(e, col1, 1, frame.p.x + (float)frame.off.x, yy + (float)frame.off.y, 0.5f);
                }
            }
            if (y > 0.0f) {
                call_8c04b250(e, col2, 1, frame.p.x, frame.p.y, 0.5f);
            }
            frame.scr.y += 25.0f;
        }
    }
}
