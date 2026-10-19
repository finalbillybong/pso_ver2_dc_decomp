typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x2];
    short f02;
    int f04;
};
struct S_vv4 {
    char unknown0[0x7b4];
    int f7b4;
};
void operation_8c02bbbc(Object *o)
{
    int v1;
    int v2;
    S_vv4 *v4;
    v1 = (int)(o->f04 >= 0);
    if (v1 != 0) {
        if ((unsigned short)o->f02 == 0xffff) {
            v4 = (S_vv4 *)0;
        } else {
            if ((int)(unsigned short)o->f02 >= 0xc) {
                v4 = (S_vv4 *)0;
            } else {
                v2 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)o->f02 << 2));
                v4 = (S_vv4 *)v2;
            }
        }
        if (v4 != 0) {
            v4->f7b4 = (int)(o->f04);
        }
    }
}
