typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x2c0];
    short f308;
    char unknown30a[0x86];
    int f390;
    char unknown394[0x4];
    float f398;
    char unknown39c[0x4];
    float f3a0;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
};
extern int call_8c1ea4e0(Object *);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void operation_8c036840(int);
void operation_8c1ea108(Object *o)
{
    Frame frame;
    char *v1;
    int v2;
    int t1;
    float t2;
    float t3;
    t1 = call_8c1ea4e0(o);
    if (t1 != 0) {
        v1 = (char *)o->f390;
        t2 = call_8c37eb0c((int)(v1));
        o->f398 = o->f3c + t2 * 8.0f;
        t3 = call_8c38c154((int)(v1));
        o->f3a0 = o->f44 + t3 * 8.0f;
        if (o != 0) {
            v2 = (int)(o->f308 == 2);
            if (v2 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        (&frame)->f00 = 0x3d;
        (&frame)->f01 = 1;
        (&frame)->f08 = 0.0f;
        (&frame)->f04 = 0.0f;
        (&frame)->f00 = 0x42;
        (&frame)->f01 = 3;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = o->f398;
        (&frame)->f08 = o->f3a0;
        operation_8c036840((int)(&frame));
    }
}
