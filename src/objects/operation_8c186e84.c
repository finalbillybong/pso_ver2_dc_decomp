typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct S_vv1 {
    char unknown0[0x8];
    int f08;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
    short f06;
};
extern int g_8c44be04;
void operation_8c186e84(void)
{
    int v2;
    S_vv1 *v1;
    S_vv4 *v4;
    int v3;
    v1 = (S_vv1 *)*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (g_8c44be04 << 2));
    if (v1 != 0) {
        v2 = (int)v1->f08;
        v3 = (int)0;
        v4 = (S_vv4 *)((int)v1 + 0x10);
        while (v2 > v3) {
            if (((v4->f04 & 2)) == 0 && ((v4->f04 & 4)) != 0) {
                ((void (*)(S_vv4 *))(*(int *)((char *)0x8c319ac8 + (v4->f06 << 2))))(v4);
                v4->f04 |= 6;
            }
            v3 = (int)(v3 + 1);
            v4 = (S_vv4 *)((char *)v4 + 20);
        }
    }
}
