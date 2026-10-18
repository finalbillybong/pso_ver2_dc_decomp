typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x20848 S_x20848;
struct S_x20848 {
    char unknown0[0x40];
    int f40;
    char unknown44[0x40];
    int f84;
};
extern void call_8c0d9ea0(void *, void *, int, int);
typedef struct S_f40 {
    int f00;
    char unknown4[0x40];
    int f44;
    int f48;
} S_f40;
void operation_8c0d9530(int a0, int a1)
{
    int v1;
    S_f40 *v2;
    int *v3;
    v2 = (S_f40 *)&((S_x20848 *)(a0 + a1 * 0xfc))->f40;
    v1 = (int)(((v2->f00 & 1)) != 0);
    if (v1 != 0) {
        v3 = &v2->f44;
        call_8c0d9ea0((void *)v2, (void *)(v3 + 1), 0, *v3 + -1);
    }
}
