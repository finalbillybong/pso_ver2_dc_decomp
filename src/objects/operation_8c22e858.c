typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_7c S_g8c467180_2c_7c;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    int f2c;
    int f30;
    char unknown34[0x60];
    int f94;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x7c];
    S_g8c467180_2c_7c *f7c;
};
extern S_g8c467180 *g_8c467180;
extern int g_8c5064f8;
extern int call_8c3727a0(int);
extern void call_8c22e8e4(Object *, void *, int);
void operation_8c22e858(Object *o)
{
    int v1;
    int t1;
    if (o->f94 == 0 || o->f94 == 0x15) {
        return;
    }
    o->f2c = 0;
    v1 = (int)0;
    while (8 > v1) {
        t1 = call_8c3727a0(v1);
        if (t1 != 0) {
            o->f2c |= 1 << v1;
        }
        v1 = (int)(v1 + 1);
    }
    if (o->f2c != o->f30) {
        o->f30 = (int)(o->f2c);
        if (g_8c5064f8 != 0) {
            g_8c5064f8 = 0;
            call_8c22e8e4(o, (void *)(g_8c467180->f2c->f7c), 1);
            o->f94 = 0x12;
            return;
        }
        o->f94 = 1;
    }
}
