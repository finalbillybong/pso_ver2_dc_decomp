typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv1 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
    char unknown6[0xe];
    short f14;
    short f16;
};
struct S_vv2 {
    unsigned char f00;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    unsigned char f04;
    unsigned char f05;
};
extern void operation_1c7dd4(void *);
int operation_8c15b6bc(int a0)
{
    int v3;
    S_vv1 *v1;
    int v4;
    S_vv2 *v2;
    v1 = (S_vv1 *)(void *)0x8c4dab80;
    v2 = (S_vv2 *)a0;
    v3 = (int)0;
    while (0x3c > v3) {
        v4 = (int)(v1->f16 == 0);
        if (v4 == 0 && v1->f00 == v2->f00 && v1->f01 == v2->f01 && v1->f02 == v2->f02 && v1->f03 == v2->f03 && v1->f04 == v2->f04 && v1->f05 == v2->f05) {
            operation_1c7dd4((void *)v1);
            v1->f14 = 0;
            v1->f16 = 0;
            return 1;
        }
        v3 = (int)(v3 + 1);
        v1 = (S_vv1 *)((char *)v1 + 24);
    }
    return 0;
}
