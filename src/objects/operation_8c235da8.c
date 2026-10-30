typedef struct Vector3 {
    float y;
    float x;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
struct Frame {
    char f08;
    char f09;
    short f0a;
    float f0c;
    float f10;
    int f14;
};
struct S_c8c021ef8 {
    char unknown0[0x64];
    int f64;
};
extern int g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c1e9c80(void *, int, void *, void *);
extern void operation_8c036840(int);
void operation_8c235da8(void)
{
    float y;
    float x;
    Frame m;
    S_c8c021ef8 *t1;
    m.f08 = 0x1a;
    m.f09 = 1;
    m.f08 = 0x3d;
    m.f09 = 1;
    m.f10 = 0.0f;
    m.f0c = 0.0f;
    m.f14 = 0;
    m.f08 = 0x40;
    m.f09 = 4;
    t1 = lookup_low_id(g_8c418248);
    if (t1 != 0) {
        m.f0a = g_8c418248;
        operation_8c1e9c80((void *)t1, (int)(t1->f64), (void *)&y, (void *)&x);
        m.f0c = y;
        m.f10 = x;
        m.f14 = 0;
        operation_8c036840((int)&m);
    }
}
