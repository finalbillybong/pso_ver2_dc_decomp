typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    Block20 f08;
};
struct S_vv1 {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    Block20 f08;
};
void operation_8c027ae4(int a0, int a1, int a2)
{
    int v3;
    S_vv1 *v1;
    S_vv2 *v2;
    v1 = (S_vv1 *)a1;
    v2 = (S_vv2 *)a2;
    v3 = (int)0;
    while (a0 > v3) {
        v2->f00 = v1->f00;
        v2->f01 = v1->f01;
        v2->f04 = v1->f04;
        v2->f08 = v1->f08;
        v2 = (S_vv2 *)((char *)v2 + 28);
        v1 = (S_vv1 *)((char *)v1 + 28);
        v3 = (int)(v3 + 1);
    }
}
