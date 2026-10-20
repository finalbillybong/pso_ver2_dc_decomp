typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
struct Object {
    char unknown0[0x2];
    short f02;
};
struct S_vv11 {
    char unknown0[0x350];
    int f350;
};
extern int g_8c418248;
extern int g_8c4627c8;
void operation_8c0268d0(Object *o)
{
    int v1;
    unsigned short v2;
    int v3;
    int v4;
    int v7;
    int v16;
    int v8;
    S_vv11 *v11;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)o->f02;
    v4 = (int)0;
    if (v1 == 0) {
        v4 = (int)0;
        if ((unsigned short)v2 == g_8c418248) {
            v4 = (int)1;
        }
    }
    v7 = (int)(v4 == 0);
    if (v7 != 0) {
        v16 = (int)(unsigned short)v2;
        if (v16 == 0xffff) {
            v11 = (S_vv11 *)0;
        } else {
            if (v16 >= 0xc) {
                v11 = (S_vv11 *)0;
            } else {
                v8 = (int)*(int *)((char *)0x8c41ce2c + (v16 << 2));
                v11 = (S_vv11 *)v8;
            }
        }
        if (v11 != 0) {
            v11->f350 = (unsigned int)v11->f350 >> 1 << 1;
        }
    }
}
