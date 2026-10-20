typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_a8 Arg0_a8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv12 S_vv12;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0xa8];
    Arg0_a8 *fa8;
    int fac;
    int fb0;
    char unknownb4[0x4];
    int fb8;
};
struct S_vv1 {
    char f00;
};
struct S_vv3 {
    char f00;
    char f01;
};
struct S_vv8 {
    char f00;
};
struct S_vv6 {
    char f00;
};
struct S_vv12 {
    char f00;
    char f01;
};
struct S_vv9 {
    char f00;
};
extern int operation_8c257e2c(int);
extern void call_8c12b154(void *, int, int);
void operation_8c1e1d04(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv3 *v3;
    char v4;
    char v10;
    int v5;
    S_vv8 *v8;
    S_vv6 *v6;
    char *v7;
    S_vv12 *v12;
    char v2;
    S_vv9 *v9;
    int t1;
    v1 = (S_vv1 *)o->fa8;
    t1 = operation_8c257e2c(a1);
    v2 = (char)v1->f00;
    v1->f00 = t1;
    v3 = (S_vv3 *)v1;
    v4 = (int)0;
    while (v3->f00 != 0) {
        v10 = v3->f01 + 3;
        v3 = (S_vv3 *)((int)v3 + v10);
        v4 += v10;
    }
    v5 = (int)((char)t1 + 3);
    v6 = (S_vv6 *)v3;

    v8 = (S_vv8 *)((int)v3 + v5);
    do {
        v8->f00 = v6->f00;
        v6--;
        v8--;
    } while (v4-- != 0);
    v7 = (char *)o->fa8;
    *v7++ = v2;
    *v7++ = t1;
    *v7++ = o->fb0;
    call_8c12b154((void *)v7, a1, (int)((char)t1));
    o->fb8 -= v5;
    if ((unsigned int)o->fac > (unsigned int)o->fa8) {
        o->fac += v5;
    }
}
