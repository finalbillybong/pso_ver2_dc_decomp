typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    int f04;
};
extern void clear_global_8c10ae90(void);
extern void clear_global_8c220b1c(void);
void operation_8c10b1e8(void)
{
    S_vv1 *v1;
    int v2;
    v1 = (S_vv1 *)(void *)0x8c30bcb0;
    v2 = (int)7;
    while (v2 > 0) {
        ((void (*)(void))(v1->f04))();
        v1 = (S_vv1 *)((char *)v1 + 20);
        v2 = (int)(v2 + -1);
    }
    *(int *)0x8c4d7ca0 = 0;
    clear_global_8c10ae90();
    clear_global_8c220b1c();
}
