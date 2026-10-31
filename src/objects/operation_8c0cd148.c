typedef struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x14];
    float f38;
    int f3c;
} Object;
typedef struct Entry {
    float *dst;
    float a;
    float b;
    int unknownc;
} Entry;
typedef struct S42c {
    char unknown0[0x48];
    void *f48;
} S42c;
typedef struct Scene {
    char unknown0[0x42c];
    S42c *f42c;
} Scene;
extern Scene *g_8c469a60;
extern void *g_8c469a64;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c46fa60;
extern Entry *g_8c46fa64;
extern void *g_8c46fa68;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void call_8c3827d8(void *);
extern void call_8c0cc8bc(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c3829bc(int, float, float, float);
extern void call_8c38c0e6(int, int);
extern void call_8c3aa716(void *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c0cd148(Object *o)
{
    Entry *e;
    int i;
    Entry *f;
    int j;
    if (o->f20 != 0) {
        call_8c3827d8(g_8c469a64);
        call_8c0cc8bc(g_8c46fa68);
        e = g_8c46fa64;
        for (i = 0; i < g_8c46fa60; i++) {
            *e->dst = e->a + e->b;
            e++;
        }
        call_8c38ae68();
        call_8c382a40(g_8c46fa68);
        call_8c3829bc(0, 0.0f, o->f38, 0.0f);
        if (o->f3c != 0) {
            g_8c46f560 = g_8c575570;
            g_8c46f574 = g_8c5755a4;
            g_8c46f578 = g_8c5755a8;
            g_8c575570 |= 0x800;
            call_8c38c0e6(0xff00, 0x100);
            call_8c3aa716(g_8c469a60->f42c->f48);
            g_8c5755a4 = g_8c46f574;
            g_8c5755a8 = g_8c46f578;
            g_8c575570 = g_8c46f560;
        } else {
            call_8c3a944a(g_8c469a60->f42c->f48);
        }
        call_8c38ad10();
        f = g_8c46fa64;
        for (j = 0; j < g_8c46fa60; j++) {
            *f->dst = f->a;
            f++;
        }
        g_8c575570 = g_8c46f560;
    }
}
