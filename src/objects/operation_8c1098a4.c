typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d7bc0 S_g8c4d7bc0;
typedef struct S_g8c4d7c4c S_g8c4d7c4c;
typedef struct S_g8c4d7c50 S_g8c4d7c50;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    int f3a8;
    char unknown3ac[0x18];
    int f3c4;
};
struct S_g8c4d7bc0 {
    int f00;
};
struct S_g8c4d7c4c {
    int f00;
};
struct S_g8c4d7c50 {
    int f00;
};
extern S_g8c4d7c4c *g_8c4d7c4c;
extern S_g8c4d7c50 *g_8c4d7c50;
void operation_8c1098a4(Object *o)
{
    int v1;
    int v3;
    int v4;
    int mask;
    int off;
    off = 0x3a8;
    v1 = (int)0;
    while (*(int *)((char *)o + off) > v1) {
        v3 = (int)(*(short *)((char *)0x8c30b928 + (v1 << 1)) << 2);
        (*(S_g8c4d7bc0 **)((char *)0x8c4d7bc0 + (v3)))->f00 |= 8;
        v1 = (int)(v1 + 1);
    }
    mask = -9;
    while (0xd > v1) {
        v4 = (int)(*(short *)((char *)0x8c30b928 + (v1 << 1)) << 2);
        (*(S_g8c4d7bc0 **)((char *)0x8c4d7bc0 + (v4)))->f00 &= mask;
        v1 = (int)(v1 + 1);
    }
    if (o->f3c4 >= 1) {
        g_8c4d7c4c->f00 |= 8;
        g_8c4d7c50->f00 |= 8;
    } else {
        g_8c4d7c4c->f00 &= -9;
        g_8c4d7c50->f00 &= -9;
    }
}
