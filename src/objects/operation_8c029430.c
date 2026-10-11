typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x350];
    int f350;
};
int operation_8c029430(void)
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
    return (v4 != 0) ? (((v4->f350 & 0x8000)) == 0) : 0;
}
