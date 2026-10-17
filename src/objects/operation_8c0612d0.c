typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
    Block_frame_c f0c;
};
struct S_vv1 {
    Vector3 f00;
};
struct Arg1 {
    int f00;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern float normalize_xz_checked(void *);
extern float call_8c130334(float, float);
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern int cross_xz_negative(void *, void *);
int operation_8c0612d0(Object *o, Arg1 *a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v7;
    float t1;
    float t2;
    float t3;
    float t4;
    int t5;
    v1 = (S_vv1 *)((char *)o + 0x318);
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v1->f00;
    (&frame)->f0c.f04 = 0.0f;
    t1 = normalize_xz_checked((void *)(&(&frame)->f0c));
    if (t1 != 0.0f) {
        t2 = call_8c130334((&frame)->f0c.f00, (&frame)->f0c.f08);
        a1->f00 = (int)(t2 * 65536.0f / 6.28318405f);
        t3 = call_8c37eb0c((void *)(o->f64));
        (&frame)->f00 = t3;
        t4 = call_8c38c154((void *)(o->f64));
        (&frame)->f08 = t4;
        t5 = cross_xz_negative((void *)(&frame), (void *)(&(&frame)->f0c));
        if (t5 != 0) {
            a1->f00 += 0x4000;
            v7 = (int)0;
            goto L_8c06136e;
        }
        a1->f00 -= 0x4000;
        v2 = (int)1;
    } else {
        a1->f00 = (int)(o->f64);
        v2 = (int)0;
    }
    v7 = (int)v2;
L_8c06136e:;
    a1->f00 = (short)a1->f00;
    return (int)(v7);
}
