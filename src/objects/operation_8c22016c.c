typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Frame {
    float f00;
    float f04;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
extern int call_8c220650(Object *);
extern void call_8c2201d0(int, Frame *, float, float);
void operation_8c22016c(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    t1 = call_8c220650(o);
    v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (t1 << 2));
    (&frame)->f00 = v1->f08 - 3.0f;
    (&frame)->f04 = v1->f0c - 3.0f;
    call_8c2201d0(a1, (Frame *)((&frame)), 66.0f, 0.3f);
}
