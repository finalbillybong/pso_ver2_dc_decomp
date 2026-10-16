typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct S_vv3 S_vv3;
struct S_g8c4dbba0 {
    char unknown0[0x8];
    int f08;
};
struct S_vv3 {
    int f00;
    short f04;
    short f06;
};
int operation_8c186e28(int a0, int a1)
{
    int v1;
    int v2;
    S_vv3 *v3;
    if (*(int *)((char *)0x8c4dbba0 + (a0 << 2)) == 0) {
        return 0;
    }
    v1 = (int)(*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (a0 << 2)))->f08;
    v2 = (int)0;
    v3 = (S_vv3 *)((char *)*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (a0 << 2)) + 0x10);
    while (v1 > v2) {
        if (v3->f00 == a1 && ((v3->f04 & 2)) == 0) {
            ((void (*)(S_vv3 *))(*(int *)((char *)0x8c319ac8 + (v3->f06 << 2))))(v3);
            v3->f04 |= 6;
            return 1;
        }
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)((char *)v3 + 20);
    }
    return 0;
}
