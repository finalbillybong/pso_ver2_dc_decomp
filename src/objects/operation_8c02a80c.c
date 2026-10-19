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
};
struct S_vv4 {
    char unknown0[0x350];
    int f350;
};
extern void operation_8c02afd8(void *);
void operation_8c02a80c(Object *o)
{
    int v1;
    S_vv4 *v4;
    int v7;
    if ((unsigned short)o->f02 == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if ((int)(unsigned short)o->f02 >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)o->f02 << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    if (v4 != 0) {
        v7 = (int)(((v4->f350 & 4)) != 0);
        if (v7 == 0) {
            v4->f350 |= 0x400000;
            operation_8c02afd8((void *)v4);
            v4->f350 &= -0x2000001;
        }
    }
}
