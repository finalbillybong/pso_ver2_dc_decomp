typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv6 S_vv6;
struct S_vv6 {
    char unknown0[0x354];
    int f354;
};
void operation_8c0294ec(void)
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
        v6->f354 = 0;
    }
}
