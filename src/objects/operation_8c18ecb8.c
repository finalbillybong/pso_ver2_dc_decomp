typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbf40 S_g8c4dbf40;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char f00;
};
struct S_g8c4dbf40 {
    char f00;
};
void operation_8c18ecb8(void)
{
    S_vv1 *v1;
    if ((int)*(int *)0x8c4dbf40 != (int)((void *)0x8c4dbe40)) {
        v1 = (S_vv1 *)*(S_g8c4dbf40 **)0x8c4dbf40;
        *(int *)0x8c4dbf40 += 1;
        v1->f00 = 0x20;
        (*(S_g8c4dbf40 **)0x8c4dbf40)->f00 = 0;
    }
}
