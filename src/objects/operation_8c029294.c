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
void operation_8c029294(void)
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
        v6->f350 |= 0x2000;
        v6->f6d8 |= 2;
    }
}
