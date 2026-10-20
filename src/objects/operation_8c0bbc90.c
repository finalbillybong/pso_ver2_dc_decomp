typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct Block_vv4_0 {
    float f00;
    float f04;
    float f08;
} Block_vv4_0;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    int f2c;
    Arg0_30 *f30;
};
struct S_vv2 {
    char f00;
};
struct S_vv4 {
    Block_vv4_0 f00;
};
struct S_vv3 {
    char unknown0[0x4];
    Vector3 f04;
};
extern float call_8c37e480(void *);
extern void call_8c3bdf60(S_vv4 *, int);
extern void call_8c37f6f0(S_vv4 *, int);
extern void call_8c37b630(S_vv4 *);
extern void call_8c0bbd84(Object *, S_vv4 *, float);
void operation_8c0bbc90(Object *o, int a1)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    float t1;
    float t2;
    v1 = (int)o->f24;
    v2 = (S_vv2 *)v1;
    v3 = (S_vv3 *)o->f28;
    v4 = (S_vv4 *)o->f30;
    while (v2->f00 >= 2) {
        t2 = call_8c37e480((void *)((int)v2 + 4));
        *(Vector3 *)&v4->f00 = *(Vector3 *)&v3->f04;
        v4 = (S_vv4 *)((char *)v4 + 12);
        v6 = (int)(v2->f00 + v5);
        v5 = (int)-1;
        while (v6 > 0) {
            call_8c3bdf60(v4, a1);
            v7 = (int)-0xc;
            v8 = (int)((int)v4 + v7);
            call_8c37f6f0(v4, v8);
            t1 = call_8c37e480((void *)v4);
            if (t1 == 0.0f) {
                v4->f00.f00 = 0.0f;
                v4->f00.f04 = -1.0f;
                v4->f00.f08 = 0.0f;
            } else {
                call_8c37b630(v4);
            }
            v4->f00.f00 *= t2;
            v4->f00.f04 *= t2;
            v4->f00.f08 *= t2;
            call_8c3bdf60(v4, v8);
            if (o->f2c != 0) {
                call_8c0bbd84(o, v4, t2);
            }
            v6 = (int)(v6 + -1);
            v4 = (S_vv4 *)((char *)v4 + 12);
        }
        v2 = (S_vv2 *)((char *)v2 + 24);
        v3 = (S_vv3 *)((char *)v3 + 16);
    }
}
