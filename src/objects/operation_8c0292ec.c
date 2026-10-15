typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv6 S_vv6;
struct S_vv6 {
    char unknown0[0x350];
    int f350;
    char unknown354[0x384];
    int f6d8;
};
void operation_8c0292ec(void)
{
    int v3;
    S_vv6 *v6;
    if (*(int *)0x8c418248 == 0xffff) {
        v6 = (S_vv6 *)0;
    } else {
        if (*(int *)0x8c418248 >= 0xc) {
            v3 = (int)0;
        } else {
            v3 = (int)*(int *)((char *)0x8c41ce2c + (*(int *)0x8c418248 << 2));
        }
        v6 = (S_vv6 *)v3;
    }
    if (v6 != 0) {
        v6->f350 &= -0x2001;
        {
            int *pf1 = (int *)((char *)v6 + 0x6d8);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        v6->f6d8 &= -3;
        v6->f6d8 &= -5;
        v6->f6d8 &= -9;
    }
}
