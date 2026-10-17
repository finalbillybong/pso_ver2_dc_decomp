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
    int f234;
    char unknown238[0x4];
    float f23c;
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
void operation_8c24f850(Object *o)
{
    Frame frame;
    int v1;
    float t1;
    float t2;
    if (o->f234 != 1) {
        if (o->f234 == 2) {
            goto L_8c24f892;
        }
        if (o->f234 == 3) {
            goto L_8c24f8b6;
        }
        return;
    }
    o->f23c -= 0.900000036f;
    if (!(o->f23c > 0.0f)) {
        o->f23c = 0.0f;
        o->f234 = 0;
        return;
L_8c24f892:;
        o->f23c += 0.900000036f;
        if (!(2.7f > o->f23c)) {
            o->f23c = 2.7f;
            o->f234 = 3;
            return;
L_8c24f8b6:;
            o->f234 = 1;
            v1 = (int)(o->f13c->f64 + -0x4000);
            t1 = call_8c37eb0c(v1);
            (&frame)->f0c = t1;
            (&frame)->f10 = 1.0f;
            t2 = call_8c38c154(v1);
            (&frame)->f14 = t2;
            (&frame)->f00 = 0x4000;
            (&frame)->f04 = (int)(o->f13c->f64);
            (&frame)->f08 = 0;
            call_8c175918((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 2, (void *)(&(&frame)->f0c), (Frame *)((&frame)));
        }
    }
}
