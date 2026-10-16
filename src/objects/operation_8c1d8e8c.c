typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_430 S_vv1_430;
typedef struct S_vv1_430_4 S_vv1_430_4;
struct Object {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    int fec;
};
struct S_vv1 {
    char unknown0[0x430];
    S_vv1_430 *f430;
};
struct S_vv1_430 {
    char unknown0[0x4];
    S_vv1_430_4 *f04;
};
struct S_vv1_430_4 {
    char unknown0[0x4];
    int f04;
};
void operation_8c1d8e8c(Object *o)
{
    S_vv1 *v1;
    float v4;
    int v6;
    v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (o->fe4 << 2));
    if (v1 != 0) {
        v4 = (float)(float)(unsigned int)(v1->f430->f04->f04 + -1);
        o->fe8 += 0.3f;
        if (!(v4 > o->fe8)) {
            o->fe8 -= v4;
        }
        v6 = (int)1;
    } else {
        v6 = (int)0;
    }
    if (v6 != 0) {
        o->fec += 2;
        if (o->fec >= 0xff) {
            o->fec -= 0xff;
        }
        v6 = (int)0xec;
    }
}
