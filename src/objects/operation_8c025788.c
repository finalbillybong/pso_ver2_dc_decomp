typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x2];
    short f02;
    int f04;
    int f08;
};
struct S_vv6 {
    char unknown0[0x34];
    int f34;
};
extern int g_8c418248;
extern int g_8c4627c8;
void operation_8c025788(Object *o)
{
    int v1;
    unsigned short v2;
    int v4;
    int v7;
    int v8;
    S_vv6 *v6;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)o->f02;
    v4 = (int)0;
    if (v1 == 0) {
        if ((unsigned short)v2 == g_8c418248) {
            v4 = (int)1;
        }
    }
    v7 = (int)(v4 == 0);
    if (v7 != 0) {
        if ((unsigned short)v2 == 0xffff) {
            v6 = (S_vv6 *)0;
        } else if ((int)(unsigned short)v2 >= 0xc) {
            v6 = (S_vv6 *)0;
        } else {
            v8 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)v2 << 2));
            v6 = (S_vv6 *)v8;
        }
        if (v6 != 0) {
            v6->f34 &= o->f04;
            v6->f34 |= o->f08;
        }
    }
}
