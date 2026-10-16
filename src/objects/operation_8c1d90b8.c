typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_430 S_vv4_430;
typedef struct S_vv4_430_4 S_vv4_430_4;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x58];
    int fe4;
    float fe8;
};
struct S_vv4 {
    char unknown0[0x430];
    S_vv4_430 *f430;
};
struct S_vv4_430_4 {
    char unknown0[0x4];
    int f04;
};
void operation_8c1d90b8(Object *o)
{
    int v1;
    S_vv4 *v4;
    int v2;
    float v7;
    v1 = (int)o->f88;
    if (!(v1 >= 0)) {
        v2 = (int)0;
    } else {
        v2 = (int)v1;
        if (v1 >= 4) {
            v2 = (int)3;
        }
    }
    v4 = (S_vv4 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (o->fe4 << 2));
    if (v4 != 0) {
        v7 = (float)(float)(unsigned int)((*(S_vv4_430_4 **)((char *)((char *)v4->f430 + 0x4) + (v2 << 3)))->f04 + -1);
        o->fe8 += 0.3f;
        if (!(v7 > o->fe8)) {
            o->fe8 -= v7;
        }
    }
}
