typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xf4];
    float f234;
    int f238;
};
struct Arg0_13c {
    char unknown0[0x64];
    int f64;
};
struct Frame {
    int f00;
    int f04;
    int f08;
    float f0c;
    float f10;
    float f14;
};
extern S_g8c44be9c *g_8c44be9c;
extern void operation_8c172c50(void *, float, float);
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void call_8c175918(void *, Object *, int, void *, Frame *);
void operation_8c252844(Object *o)
{
    Frame frame;
    char *v24;
    int v1;
    int pm4;
    int pm6;
    v24 = (char *)o->f238;
    if (!((int)(v24) != 1)) {
        float t1;
        float t2;
        int pm3;
        operation_8c172c50((void *)((&o->f234)), -0.5f, -2.0f);
        if (o->f234 != -2.0f) {
            return;
        }
        pm4 = 2;
        pm3 = pm4;
        o->f238 = pm3;
        pm6 = 0x4000;
        v1 = (o->f13c->f64 + pm6);
        t1 = call_8c37eb0c(v1);
        (&frame)->f0c = t1;
        (&frame)->f10 = 0.0f;
        t2 = call_8c38c154(v1);
        (&frame)->f14 = t2;
        (&frame)->f00 = 0x4000;
        (&frame)->f04 = (int)(o->f13c->f64);
        (&frame)->f08 = 0;
        call_8c175918(g_8c44be9c, o, 3, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
        return;
    }
    if ((int)(v24) == 2) {
        operation_8c172c50((void *)(&o->f234), 0.2f, 0.0f);
        if (o->f234 == 0.0f) {
            o->f238 = 0;
        }
    }
}
