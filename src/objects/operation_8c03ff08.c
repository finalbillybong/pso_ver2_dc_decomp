typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x4];
    float f4c;
    float f50;
    float f54;
};
extern S_g8c44be84 *g_8c44be84;
extern char g_8c466dc2;
extern int g_8c466de4;
extern int g_8c466df4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c01c250(int);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern void call_8c100524(int);
extern void call_8c03f734(Object *, int);
extern void operation_8c03f840(Object *);
extern int call_8c03f868(Object *, int);
extern void call_8c05fbf8(int, int, int, int);
extern void clear_global_render_resources(void);
void operation_8c03ff08(Object *o)
{
    float v22;
    char *v23;
    int t1;
    int t2;
    int t3;
    operation_8c01c250(2);
    if (++g_8c466df4 > (o->f34 * 0x50)) {
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
        if (t1 != 0) {
            initialize_color_rise(t1, g_8c44be84, (void *)((void *)0x8c03f480));
        }
        call_8c100524(0x1e);
        g_8c466de4 = 3;
        return;
    }
    if (o->f30 == 1) {
        v22 = (float)1.0f;
    } else {
        v22 = (float)0.5f;
    }
    o->f54 = v22;
    o->f50 = v22;
    o->f4c = v22;
    o->f44 = 1.0f;
    o->f40 = 1.0f;
    o->f3c = 1.0f;
    v23 = (char *)*(int *)((char *)0x8c41cba0 + (o->f24 << 2));
    call_8c03f734(o, (int)(v23));
    operation_8c03f840(o);
    t2 = call_8c03f868(o, (int)(v23));
    if (t2 == 1) {
        g_8c466de4 = 3;
        call_8c05fbf8(0x40009, 0, 0, 0);
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
        if (t3 != 0) {
            initialize_color_rise(t3, g_8c44be84, (void *)((void *)0x8c03f480));
        }
        if (g_8c466dc2 == 3) {
            clear_global_render_resources();
        }
    }
}
