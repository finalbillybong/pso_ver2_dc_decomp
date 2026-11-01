typedef struct Pose {
    char unknown0[0x4];
    unsigned int color;
    float scale;
    float time;
    char unknown10[0x30];
    int f40;
    float f44;
    char unknown48[0xc];
    float *weights;
} Pose;
extern int g_state;
extern int g_dirty;
extern Pose *g_tbl0[4];
#define g_tbl(k) (*(Pose **)((char *)g_tbl0 + ((k) << 2)))
extern int g_cur;
extern int g_from;
extern int g_a;
extern int g_b;
extern int g_src;
extern int g_dst;
extern int g_next;
extern float g_t;
extern float g_dt;
extern int call_8c121aa4(int);
extern void call_8c1224c8(Pose *, float *);
extern void operation_8c121a90(int, int);
extern float *operation_8c12213c(Pose *);
extern void operation_8c122164(int);
void operation_8c121734(void)
{
    int flag;
    Pose *p;
    Pose *a;
    Pose *b;
    float u;
    float t;
    float *dst;
    float *wa;
    float *wb;
    int i;
    unsigned int c;
    unsigned int ca;
    unsigned int cb;
    float f;
    flag = 0;
    switch (g_state) {
    case 0:
        if (call_8c121aa4(g_cur) != 0) {
            flag = 1;
        }
        break;
    case 1:
        if (g_a == 2) {
            call_8c1224c8(g_tbl(g_a), g_tbl(g_a)->weights);
        }
        operation_8c121a90(g_a, g_b);
        flag = 1;
        g_cur = g_b;
        g_state = 0;
        break;
    case 2:
        if (g_a == 2) {
            call_8c1224c8(g_tbl(g_a), g_tbl(g_a)->weights);
        }
        g_src = g_from;
        g_dst = g_a;
        g_next = g_b;
        g_t = 0.0f;
        if (g_a == 0) {
            g_dt = g_tbl(g_from)->time;
        } else {
            g_dt = g_tbl(g_a)->time;
        }
        if (!(g_dt > 0.0f)) {
            g_dt = 0.001f;
        }
        g_cur = 3;
        g_tbl0[3]->f40 = g_tbl(g_dst)->f40;
        g_state = 3;
    case 3:
        p = g_tbl0[3];
        a = g_tbl(g_src);
        b = g_tbl(g_dst);
        call_8c121aa4(g_src);
        call_8c121aa4(g_dst);
        p->f44 = 0.0f;
        u = 1.0f;
        t = g_t;
        if (!(u > t)) {
            operation_8c121a90(g_a, g_b);
            g_cur = g_next;
            g_state = 0;
        } else {
            u -= t;
            ca = a->color;
            f = (float)((ca >> 16) & 0xff);
            cb = b->color;
            c = (unsigned char)(unsigned int)(f * u + (float)((cb >> 16) & 0xff) * t) << 16;
            c |= (unsigned char)(unsigned int)((float)((ca >> 8) & 0xff) * u + (float)((cb >> 8) & 0xff) * t) << 8;
            p->color = (unsigned char)(unsigned int)((float)(ca & 0xff) * u + (float)(cb & 0xff) * t) | c;
            p->scale = a->scale * u + b->scale * t;
            dst = p->weights;
            wa = operation_8c12213c(a);
            wb = operation_8c12213c(b);
            for (i = 0; i < 0x80; i++) {
                *dst++ = *wa++ * u + *wb++ * t;
            }
            g_t += g_dt;
        }
        flag = 1;
    }
    if (flag != 0) {
        operation_8c122164(g_cur);
        g_dirty |= 1;
    }
}
