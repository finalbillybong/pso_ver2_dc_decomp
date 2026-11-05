struct TQuadSpriteNormal_p20;
struct TQuadSpriteNormal_p2c;
typedef struct TQuadSpriteNormal {
    void *name;
    char pad_4[0x14];
    void *dispatch;
    char pad_1c[0x2];
    unsigned short size;
    struct TQuadSpriteNormal_p20 *f20;
    char pad_24[0x4];
    int f28;
    struct TQuadSpriteNormal_p2c *f2c;
} TQuadSpriteNormal;
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Node {
    struct Node *next;
    Vector3 a;
    Vector3 b;
    char pad1c[0x8];
    int f24;
    char pad28[0x1];
    char f29;
} Node;
typedef struct TQuadSpriteNormal_p20 {
    Node *head;
    char pad04[0x28];
} TQuadSpriteNormal_p20;
typedef struct Rect4 {
    float f00;
    float f04;
    float f08;
    float f0c;
} Rect4;
typedef struct TQuadSpriteNormal_p2c {
    int f00;
    void *f04;
    int f08;
    int f0c;
    Rect4 *f10;
    float f14;
    float f18;
    unsigned int f1c;
} TQuadSpriteNormal_p2c;
typedef struct View {
    float f00;
    char unknown4[0x8];
    float f0c;
    float f10;
} View;
typedef struct Frame {
    Vector3 pos;
    float f0c;
    float f10;
    float f14;
    float f18;
    Rect4 uv;
    Vector3 out;
} Frame;
extern float g_8c57555c;
extern float g_8c575560;
extern View g_8c575528;
extern void set_blend_5_6(void);
extern void restore_child_blend(void);
extern void set_blend_5_7(void);
extern void set_child_blend(void);
extern void reset_state_8c391c94(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, unsigned int);
extern void call_8c3be280(int, Vector3 *, Vector3 *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void sq_header3_8c38b02e(int);
extern void reset_state_8c391cc4(void);
extern void reset_manager_record_slots(void *);
void TQuadSpriteCol_render_8c0402c8(TQuadSpriteNormal *o)
{
    Frame frame;
    int flags;
    float a;
    float kx;
    float ky;
    float cx;
    float cy;
    int i;
    Node *p;
    Rect4 *q;
    float w;
    float x;
    float y;
    float sx;
    float sy;
    TQuadSpriteNormal_p2c *d;
    flags = o->f2c->f00;
    if (flags & 2) {
        if (flags & 4) {
            set_blend_5_6();
        } else {
            restore_child_blend();
        }
    } else {
        if (flags & 4) {
            set_blend_5_7();
        } else {
            set_child_blend();
        }
    }
    a = g_8c575528.f00;
    kx = a * g_8c57555c;
    ky = a * g_8c575560;
    cx = g_8c575528.f0c;
    cy = g_8c575528.f10;
    reset_state_8c391c94();
    sq_select_8c38aeb4(1);
    call_8c3827d8(o->f2c->f04);
    sq_header_8c38af22(o->f2c->f08, o->f2c->f1c);
    for (i = 0; i < (d = o->f2c)->f0c; i++) {
        p = o->f20[i].head;
        q = (Rect4 *)((char *)d->f10 + (i << 4));
        frame.uv.f00 = q->f00;
        frame.uv.f04 = q->f04;
        frame.uv.f08 = q->f08;
        frame.uv.f0c = q->f0c;
        for (; p != 0; p = p->next) {
            frame.pos.x = p->a.x + p->b.x;
            frame.pos.y = p->a.y + p->b.y;
            frame.pos.z = p->a.z + p->b.z;
            if (p->f29 != 1) {
                call_8c3be280(0, &frame.pos, &frame.out);
            } else {
                frame.out = frame.pos;
            }
            if (!(1.0f > frame.out.z) || p->f29 == 1) {
                sq_header3_8c38b02e(p->f24);
                if (p->f29 != 1) {
                    w = 1.0f / frame.out.z;
                    sx = kx * w;
                    sy = ky * w;
                    x = frame.out.x * sx + cx;
                    y = frame.out.y * sy + cy;
                } else {
                    w = frame.out.z;
                    sx = 1.0f;
                    sy = sx;
                    x = frame.out.x;
                    y = frame.out.y;
                }
                sx *= o->f2c->f14;
                sy *= o->f2c->f18;
                frame.f0c = x - sx;
                frame.f14 = x + sx;
                frame.f10 = y - sy;
                frame.f18 = y + sy;
                sq_quad_8c38b09e(&frame.f0c, w);
            }
        }
        sq_flush_8c38af12();
    }
    reset_state_8c391cc4();
    reset_manager_record_slots(o);
}
