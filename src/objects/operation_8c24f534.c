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
    char unknown140[0x104];
    int f244;
    char unknown248[0x4];
    float f24c;
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
extern float call_8c37eb0c(int);
extern float call_8c38c154(int);
extern void call_8c175918(void *, Object *, int, void *, Frame *);
void operation_8c24f534(Object *o)
{
    Frame frame;
    int v1;
    float t1;
    float t2;
    if (o->f244 != 1) {
        if (o->f244 == 2) {
            goto L_8c24f576;
        }
        if (o->f244 == 3) {
            goto L_8c24f59a;
        }
        return;
    }
    o->f24c -= 0.466666669f;
    if (!(o->f24c > 0.0f)) {
        o->f24c = 0.0f;
        o->f244 = 0;
        return;
L_8c24f576:;
        o->f24c += 0.466666669f;
        if (!(1.4f > o->f24c)) {
            o->f24c = 1.4f;
            o->f244 = 3;
            return;
L_8c24f59a:;
            o->f244 = 1;
            v1 = (int)(o->f13c->f64 + -0x4000);
            t1 = call_8c37eb0c(v1);
            (&frame)->f0c = t1;
            (&frame)->f10 = 1.0f;
            t2 = call_8c38c154(v1);
            (&frame)->f14 = t2;
            (&frame)->f00 = 0x4000;
            (&frame)->f04 = (int)(o->f13c->f64);
            (&frame)->f08 = 0;
            call_8c175918((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 3, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
        }
    }
}
