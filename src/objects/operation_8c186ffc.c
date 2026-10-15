typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct S_vv4 S_vv4;
struct S_g8c4dbba0 {
    char unknown0[0x8];
    int f08;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
void operation_8c186ffc(void)
{
    int v2;
    int v1;
    S_vv4 *v4;
    int v3;
    v1 = (int)0;
    while (0x12 > v1) {
        if (*(int *)((char *)0x8c4dbba0 + (v1 << 2)) != 0) {
            v2 = (int)(*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (v1 << 2)))->f08;
            v3 = (int)0;
            v4 = (S_vv4 *)((char *)*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (v1 << 2)) + 0x10);
            while (v2 > v3) {
                v4->f04 = 0;
                v3 = (int)(v3 + 1);
                v4 = (S_vv4 *)((char *)v4 + 20);
            }
        }
        v1 = (int)(v1 + 1);
    }
}
