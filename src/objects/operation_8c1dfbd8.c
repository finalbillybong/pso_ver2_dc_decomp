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
struct Object {
    char unknown0[0x6c];
    char f6c;
    char f6d;
};
struct S_vv1 {
    char unknown0[0x8];
    S_vv1_8 *f08;
};
extern int g_8c467188;
extern S_g8c46718c *g_8c46718c;
int operation_8c1dfbd8(Object *o, int a1)
{
    unsigned int v4;
    int v5;
    unsigned int v3;
    S_vv1 *v1;
    int v2;
    int row;
    v1 = (S_vv1 *)g_8c46718c;
    if (g_8c467188 != 0) {
        return -1;
    }
    switch (o->f6d) {
    case 0:
        v2 = 0x17;
        break;
    case 1:
        v2 = 0x18;
        break;
    case 2:
        v2 = 0x19;
        break;
    case 3:
        v2 = 0x1a;
        break;
    default:
        v2 = a1;
        break;
    }
    for (v3 = 0; v3 < 7; v3++) {
        row = v3 << 4;
        for (v4 = 0; v4 < 16; v4++) {
            v5 = v4 + row;
            if ((*(volatile unsigned short *)((char *)*(S_vv1_8_0 **)((char *)v1->f08 + (o->f6c << 2)) + (v5 << 1)) & 0xffff) == (unsigned short)v2) {
                return v5;
            }
        }
    }
    return -1;
}
