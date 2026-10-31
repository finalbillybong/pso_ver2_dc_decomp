typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46718c S_g8c46718c;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_8 S_vv1_8;
typedef struct S_vv1_8_0 S_vv1_8_0;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x68];
    int f68;
};
struct S_vv1 {
    char unknown0[0x8];
    S_vv1_8 *f08;
};
struct S_vv3 {
    char f00;
};
extern S_g8c46718c *g_8c46718c;
int operation_8c1dfc78(Object *o)
{
    S_vv3 *v3;
    unsigned int v5;
    unsigned int v4;
    S_vv1 *v1;
    int v6;
    int v2;
    unsigned int off;
    v1 = (S_vv1 *)g_8c46718c;
    if (((o->f68 & 0x10)) != 0) {
        v2 = (int)0x16;
    } else {
        if (((o->f68 & 0x20)) != 0) {
            v2 = (int)0x15;
        } else {
            return -1;
        }
    }
    v3 = (S_vv3 *)((char *)o + 0x6c);
    v4 = (unsigned int)0;
    while ((unsigned int)7 > v4) {
        off = v4 << 4;
        v5 = (unsigned int)0;
        while ((unsigned int)0x10 > v5) {
            v6 = (int)v5;
            v6 = (int)(v6 + off);
            if ((*(volatile unsigned short *)((char *)((char *)*(S_vv1_8_0 **)((char *)((char *)v1->f08 + 0x0) + (v3->f00 << 2)) + 0x0) + (v6 << 1)) & 0xffff) == (unsigned short)v2) {
                return (int)(v6);
            }
            v5 = (unsigned int)(v5 + 1);
        }
        v4 = (unsigned int)(v4 + 1);
    }
    return -1;
}
