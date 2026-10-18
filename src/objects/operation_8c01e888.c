typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_c S_vv12_c;
struct Object {
    char unknown0[0x364];
    int f364;
};
struct S_g8c44be9c {
    char unknown0[0x14];
    int f14;
};
struct S_vv12 {
    int f00;
    char unknown4[0x8];
    S_vv12_c *f0c;
    char unknown10[0x5c];
    float f6c;
};
extern int g_8c300198;
extern S_g8c44be9c *g_8c44be9c;
extern int classify_range_8c0e76d4(void *);
S_vv12 *operation_8c01e888(Object *o, int a1)
{
    int v1;
    int v2;
    int v10;
    S_vv12 *v12;
    int v13;
    int v9;
    int v14;
    int v11;
    int v15;
    int v4;
    int t1;
    v1 = (int)o->f364;
    if (v1 != -1) {
        o->f364 = -1;
        v4 = (int)v1;
    } else {
        t1 = classify_range_8c0e76d4((void *)((void *)0x8c46fec0));
        switch (t1) {
        case 0:
            v2 = (int)1;
            break;
        case 1:
        case 2:
            v2 = (int)0;
            break;
        case 4:
        default:
            v2 = (int)1;
        }
        v4 = (int)v2;
    }
    v9 = (int)g_8c300198;
    v10 = (int)g_8c44be9c->f14;
    v11 = (int)0x88;
    v12 = (S_vv12 *)v10;
    while (v12 != 0) {
        v13 = (int)v12->f00;
        v14 = (int)(v13 == v9);
        if (v14 != 0 && a1 == (int)v12->f6c) {
            v15 = (int)*(int *)((char *)&v12->f00 + (v11));
            if (v15 == v4) {
                return v12;
            }
        }
        v12 = (S_vv12 *)v12->f0c;
    }
    return 0;
}
