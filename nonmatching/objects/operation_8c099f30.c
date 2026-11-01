/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c099f30
 * function: operation_8c099f30
 * language: c
 * reference size: 444 bytes
 * compiled size: 448 bytes (+0.9%)
 * differing lines: 150 of 173 reference instruction lines
 * differing bytes: 392
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Colors {
    int f00;
    int f04;
    int f08;
    int f0c;
} Colors;
typedef struct Quad {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
} Quad;
typedef struct Pos {
    char unknown0[0x48];
    float f48;
    float f4c;
} Pos;
typedef struct Object {
    char unknown0[0x20];
    Pos *f20;
    char unknown24[0x8];
    float f2c;
} Object;
extern Block8 g_8c3011cc;
extern Colors g_8c469e58;
extern Quad g_8c469e68;
extern Colors g_8c469e88;
extern char g_8c30122c[];
extern char g_8c30123c[];
extern void call_8c38ef2c(void *, int, int, float);
extern void operation_195990(int, Block8 *, float, float);
extern void operation_195a84(float);
extern void operation_195c84(float);
void operation_8c099f30(Object *o)
{
    Block8 frame;
    float v;
    float x;
    float lo;
    Pos *p;
    v = o->f2c;
    v = v * v;
    g_8c469e58.f00 = g_8c469e58.f04 = g_8c469e58.f08 = g_8c469e58.f0c = (int)(v * 32.0f) << 24 | 0xffffff;
    call_8c38ef2c(g_8c30122c, 4, 0x40, -2.0f);
    g_8c469e88.f00 = g_8c469e88.f04 = g_8c469e88.f08 = g_8c469e88.f0c = (int)(v * 64.0f) << 24 | 0xffffff;
    p = o->f20;
    x = p->f48;
    v = p->f4c;
    x = x - 0.5f;
    v = v - 0.5f;
    x = x * 2.0f;
    v = v * 2.0f;
    x = x * 75.0f;
    v = v * 75.0f;
    x = x + 320.0f;
    v = v + 240.0f;
    lo = x - 2.0f;
    x = x + 2.0f;
    g_8c469e68.f00 = lo;
    g_8c469e68.f08 = x;
    g_8c469e68.f04 = g_8c469e68.f0c = 150.0f;
    g_8c469e68.f10 = x;
    g_8c469e68.f18 = lo;
    g_8c469e68.f14 = g_8c469e68.f1c = 330.0f;
    call_8c38ef2c(g_8c30123c, 4, 0x60, -2.0f);
    lo = v - 2.0f;
    v = v + 2.0f;
    g_8c469e68.f04 = lo;
    g_8c469e68.f0c = v;
    g_8c469e68.f00 = g_8c469e68.f08 = 230.0f;
    g_8c469e68.f14 = v;
    g_8c469e68.f1c = lo;
    g_8c469e68.f10 = g_8c469e68.f18 = 410.0f;
    call_8c38ef2c(g_8c30123c, 4, 0x60, -2.0f);
    frame = g_8c3011cc;
    operation_195990(0x12, &frame, -1.6f, o->f2c * o->f2c);
    operation_195a84(o->f2c);
    operation_195c84(o->f2c);
}
