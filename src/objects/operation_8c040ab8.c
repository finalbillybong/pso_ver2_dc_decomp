typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Rec {
    float a;
    float b;
    float c;
    float d;
} Rec;
typedef struct Def {
    int flags;
    void *f04;
    int f08;
    int f0c;
    Rec *f10;
    float f14;
    float f18;
    int f1c;
} Def;
typedef struct Sprite Sprite;
struct Sprite {
    Sprite *next;
    Vector3 pos;
    Vector3 off;
    float w;
    float h;
    char unknown24[0x5];
    signed char f29;
};
typedef struct Object {
    char unknown0[0x20];
    Sprite **f20;
    char unknown24[0x4];
    int f28;
    Def *f2c;
} Object;
typedef struct View {
    float f00;
    char unknown4[0x8];
    float f0c;
    float f10;
} View;
typedef struct Frame {
    Vector3 p;
    float x0;
    float y0;
    float x1;
    float y1;
    float a;
    float b;
    float c;
    float d;
    Vector3 q;
} Frame;
extern float g_8c57555c;
extern float g_8c575560;
extern View g_8c575528;
extern void set_blend_5_6(void);
extern void restore_child_blend(void);
extern void set_blend_5_7(void);
extern void set_child_blend(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, unsigned int);
extern void reset_state_8c391c94(void);
extern void call_8c3be280(int, Frame *, Vector3 *);
extern void sq_quad_8c38b09e(float *, float);
extern void sq_flush_8c38af12(void);
extern void reset_state_8c391cc4(void);
extern void reset_manager_record_slots(void *);
void TQuadSpriteScl_render_8c040ab8(Object *o)
{
    Frame frame;
    int fl;
    float a;
    float sx0;
    float sy0;
    float cx;
    float cy;
    int i;
    Sprite *s;
    Rec *r;
    float inv;
    float x;
    float y;
    float sx;
    float sy;
    float z;
    Def *d;
    if (o->f28 == 0) {
        return;
    }
    fl = o->f2c->flags;
    if (fl & 2) {
        if (fl & 4) {
            set_blend_5_6();
        } else {
            restore_child_blend();
        }
    } else if (fl & 4) {
        set_blend_5_7();
    } else {
        set_child_blend();
    }
    a = g_8c575528.f00;
    sx0 = a * g_8c57555c;
    sy0 = a * g_8c575560;
    cx = g_8c575528.f0c;
    cy = g_8c575528.f10;
    sq_select_8c38aeb4(1);
    call_8c3827d8(o->f2c->f04);
    sq_header_8c38af22(o->f2c->f08, o->f2c->f1c);
    reset_state_8c391c94();
    for (i = 0; i < (d = o->f2c)->f0c; i++) {
        s = *(Sprite **)((char *)o->f20 + i * 0x2c);
        r = (Rec *)((char *)d->f10 + (i << 4));
        frame.a = r->a;
        frame.b = r->b;
        frame.c = r->c;
        frame.d = r->d;
        for (; s != 0; s = s->next) {
            frame.p.x = s->pos.x + s->off.x;
            frame.p.y = s->pos.y + s->off.y;
            frame.p.z = s->pos.z + s->off.z;
            if (s->f29 != 1) {
                call_8c3be280(0, &frame, &frame.q);
            } else {
                frame.q = frame.p;
            }
            z = frame.q.z;
            if (!(1.0f > z) || s->f29 == 1) {
                if (s->f29 != 1) {
                    inv = 1.0f / z;
                    sx = sx0 * inv;
                    sy = sy0 * inv;
                    x = frame.q.x * sx + cx;
                    y = frame.q.y * sy + cy;
                } else {
                    x = frame.q.x;
                    inv = z;
                    y = frame.q.y;
                    sx = 1.0f;
                    sy = sx;
                }
                sx *= o->f2c->f14;
                sy *= o->f2c->f18;
                sx *= s->w;
                sy *= s->h;
                frame.x0 = x - sx;
                frame.x1 = x + sx;
                frame.y0 = y - sy;
                frame.y1 = y + sy;
                sq_quad_8c38b09e(&frame.x0, inv);
            }
        }
        sq_flush_8c38af12();
    }
    reset_state_8c391cc4();
    reset_manager_record_slots(o);
}
