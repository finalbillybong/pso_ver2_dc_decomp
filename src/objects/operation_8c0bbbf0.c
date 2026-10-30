typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x20];
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    int f2c;
    Arg0_30 *f30;
};
struct S_vv1 {
    char f00;
};
struct S_vv4 {
    char f00;
};
struct Frame {
    Vector3 f00;
};
struct S_vv5 {
    char unknown0[0x4];
    Vector3 f04;
};
struct S_vv6 {
    Vector3 f00;
};
extern int call_8c011e9c(int);
extern void call_8c3bdf60(Frame *, void *);
void operation_8c0bbbf0(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    int v2;
    S_vv1 *v1;
    char v3;
    S_vv4 *v4;
    S_vv5 *v5;
    S_vv6 *v6;
    int v7;
    int t1;
    o->f24 = (Arg0_24 *)a1;
    o->f28 = (Arg0_28 *)a2;
    o->f2c = a3;
    o->f20 = 0;
    v1 = (S_vv1 *)a1;
    v2 = (int)0;
    while ((v3 = v1->f00) >= 2) {
        v2 = (int)(v2 + (char)v3);
        v1 = (S_vv1 *)((char *)v1 + 24);
        o->f20 += 1;
    }
    t1 = call_8c011e9c((int)(v2 * 0xc));
    o->f30 = (Arg0_30 *)t1;
    v4 = (S_vv4 *)o->f24;
    v5 = (S_vv5 *)o->f28;
    v6 = (S_vv6 *)o->f30;
    while (v4->f00 >= 2) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v5->f04;
        v7 = (int)v4->f00;
        while (v7 > 0) {
            *(Vector3 *)&v6->f00 = *(Vector3 *)&(&frame)->f00;
            call_8c3bdf60((Frame *)((&frame)), (void *)((int)v4 + 4));
            v7 = (int)(v7 + -1);
            v6 = (S_vv6 *)((char *)v6 + 12);
        }
        v4 = (S_vv4 *)((char *)v4 + 24);
        v5 = (S_vv5 *)((char *)v5 + 16);
    }
}
