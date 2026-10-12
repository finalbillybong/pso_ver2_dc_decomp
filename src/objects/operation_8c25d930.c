typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513440 S_g8c513440;
typedef struct S_g8c513440_14 S_g8c513440_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_c S_vv1_c;
struct S_g8c513440 {
    char unknown0[0x14];
    S_g8c513440_14 *f14;
};
struct S_vv1 {
    char unknown0[0xc];
    S_vv1_c *f0c;
};
extern void call_8c25dbf8(int, int);
void operation_8c25d930(int a0)
{
    S_vv1 *v1;
    if (*(int *)0x8c513440 != 0) {
        v1 = (S_vv1 *)(*(S_g8c513440 **)0x8c513440)->f14;
        while (v1 != 0) {
            call_8c25dbf8((int)v1, a0);
            v1 = (S_vv1 *)v1->f0c;
        }
    }
}
