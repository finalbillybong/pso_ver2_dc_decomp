typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void update_pair_grid_view(void *);
extern int operation_8c01d8a8(void *, int);
extern int pair_grid_view_ready(void *);
extern void operation_8c22ed20(void *);
extern void call_8c119c78(int);
void operation_8c22ebf8(int a0)
{
    int t1;
    int t2;
    update_pair_grid_view((void *)a0);
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
        if (t1 == 0) {
            return;
        }
    }
    t2 = pair_grid_view_ready((void *)a0);
    if (t2 != 0) {
        operation_8c22ed20((void *)a0);
        return;
    }
    call_8c119c78(a0);
}
