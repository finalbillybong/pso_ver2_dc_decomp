typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_3b8 S_vv4_3b8;
struct S_vv4 {
    char unknown0[0x3b8];
    S_vv4_3b8 *f3b8;
};
struct S_vv4_3b8 {
    char unknown0[0x440];
    unsigned short f440;
};
int operation_8c027138(void)
{
    int v2;
    S_vv4 *v4;
    if (*(int *)0x8c418248 == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if (*(int *)0x8c418248 >= 0xc) {
            v2 = (int)0;
        } else {
            v2 = (int)*(int *)((char *)0x8c41ce2c + (*(int *)0x8c418248 << 2));
        }
        v4 = (S_vv4 *)v2;
    }
    if (v4 == 0) {
        return 0xffff;
    }
    return (v4->f3b8 == 0) ? 0xffff : v4->f3b8->f440;
}
