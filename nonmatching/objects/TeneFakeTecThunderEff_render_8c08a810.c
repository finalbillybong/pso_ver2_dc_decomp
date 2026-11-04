/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08a810
 * function: TeneFakeTecThunderEff_render_8c08a810
 * language: c
 * reference size: 788 bytes
 * compiled size: 804 bytes (+2.0%)
 * differing lines: 448 of 348 reference instruction lines
 * differing bytes: 697
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, constant loading; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +16 bytes
 * class header: src/include/classes/TeneFakeTecThunderEff.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Vert {
    float x;
    float y;
    float z;
    float u;
    float v;
    int color;
} Vert;
typedef struct Frame {
    float v;
    float cy;
    float cx;
    float cz;
    float oy;
    float ox;
    Vector3 p;
    float sy[17];
    float sx[17];
    Vector3 rec[17];
    Vert verts[34];
} Frame;
typedef struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x2f0];
    int f330;
    char unknown334[0x10];
    int f344;
} Object;
typedef struct G528 {
    float f00;
    char unknown4[0x8];
    float f0c;
    float f10;
} G528;
extern void *g_8c469d88;
extern int g_8c46f560;
extern G528 g_8c575528;
extern float g_8c57555c;
extern float g_8c575560;
extern int g_8c575570;
extern void state_set_4c_8c3809a4(int);
extern void call_8c3be280(int, int, Vector3 *);
extern float signed_inv_sqrt_8c37f6d8(float);
extern void set_child_blend(void);
extern void call_8c38d9a0(void *, int, void *, int);
extern void call_8c38c0f0(void *);
void TeneFakeTecThunderEff_render_8c08a810(Object *o)
{
    Frame frame;
    int i;
    float s;
    int color;
    float sx;
    int base;
    float sy;
    int off;
    float inv;
    float t;
    float u;
    int j;
    int m1;
    Vector3 *r;
    Vert *q;
    float px;
    float py;
    float dx;
    float dy;
    float a;
    float b;
    if (o->f344 == 0) {
        return;
    }
    g_8c46f560 = g_8c575570;
    g_8c575570 |= 0x10;
    state_set_4c_8c3809a4(0);
    i = 0;
    s = g_8c575528.f00;
    color = o->f330 | 0xffffff;
    sx = s * g_8c57555c;
    frame.ox = g_8c575528.f0c;
    frame.oy = g_8c575528.f10;
    base = 0x10c;
    sy = s * g_8c575560;
    for (; i < o->f3c; i++) {
        off = i * 0xc;
        call_8c3be280(0, (int)o + off + base, &frame.p);
        if (1.0f > frame.p.z) {
            frame.p.z = 1.0f;
        }
        inv = 1.0f / frame.p.z;
        t = sx * inv;
        *(float *)(off + (char *)&frame.rec[0].x) = frame.p.x * t + frame.ox;
        u = sy * inv;
        *(float *)(off + (char *)&frame.rec[0].y) = frame.p.y * u + frame.oy;
        *(float *)(off + (char *)&frame.rec[0].z) = inv;
        *(float *)((i << 2) + (char *)frame.sx) = t;
        *(float *)((i << 2) + (char *)frame.sy) = u;
    }
    j = 0;
    m1 = -1;
    px = frame.rec[0].x;
    r = (Vector3 *)((char *)frame.rec + 0xc);
    q = frame.verts;
    py = frame.rec[0].y;
    frame.cz = frame.rec[0].z;
    frame.v = 0.0f;
    for (; j < o->f3c + m1; j++) {
        frame.cx = r->x;
        frame.cy = r->y;
        dy = frame.cy - py;
        dx = frame.cx - px;
        s = signed_inv_sqrt_8c37f6d8(dx * dx + dy * dy);
        dy *= s;
        dx *= s;
        a = dy * *(float *)((j << 2) + (char *)frame.sx) * 1.0f;
        b = -dx * *(float *)((j << 2) + (char *)frame.sy) * 1.0f;
        q[0].x = px + a;
        q[0].y = py + b;
        q[0].z = frame.cz;
        q[0].u = 0.0f;
        q[0].v = frame.v;
        q[0].color = color;
        q[1].x = px - a;
        px = frame.cx;
        q[1].y = py - b;
        py = frame.cy;
        q[1].z = frame.cz;
        q[1].u = 1.0f;
        q[1].v = frame.v;
        q[1].color = color;
        frame.v += 1.0f;
        frame.cz = r->z;
        q += 2;
        r++;
    }
    a = frame.sx[o->f3c - 1] * dy * 1.0f;
    b = -dx * frame.sy[o->f3c - 1] * 1.0f;
    q[0].x = px + a;
    q[0].y = py + b;
    q[0].z = frame.cz;
    q[0].u = 0.0f;
    q[0].v = frame.v;
    q[0].color = color;
    q[1].x = px - a;
    q[1].y = py - b;
    q[1].z = frame.cz;
    q[1].u = 1.0f;
    q[1].v = frame.v;
    q[1].color = color;
    set_child_blend();
    call_8c38d9a0(frame.verts, o->f3c << 1, g_8c469d88, 1);
    call_8c38c0f0((void *)0x8c305fd8);
    g_8c575570 = g_8c46f560;
}
