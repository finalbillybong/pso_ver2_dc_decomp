typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char unknown0[0x8];
    int f08;
};
int operation_8c186fd4(void)
{
    int v1;
    int v2;
    S_vv3 *v3;
    v1 = (int)0;
    v2 = (int)0;
    while (0x12 > v2) {
        v3 = (S_vv3 *)*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (v2 << 2));
        if (v3 != 0) {
            v1 = (int)(v1 + v3->f08);
        }
        v2 = (int)(v2 + 1);
    }
    return v1 << 1;
}
