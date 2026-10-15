typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
struct S_vv1 {
    char unknown0[0xc];
    float f0c;
    float f10;
};
struct S_vv3 {
    float f00;
    float f04;
};
void operation_8c20b178(int a0, int a1)
{
    S_vv1 *v1;
    S_vv3 *v3;
    int v2;
    v1 = (S_vv1 *)a0;
    v2 = (int)0;
    v3 = (S_vv3 *)&*(int *)((char *)0x8c504fe0 + (a1 << 6));
    while (8 > v2) {
        v1->f0c = v3->f00;
        v1->f10 = v3->f04;
        v1 = (S_vv1 *)((char *)v1 + 24);
        v3 = (S_vv3 *)((char *)v3 + 8);
        v2 = (int)(v2 + 1);
    }
}
