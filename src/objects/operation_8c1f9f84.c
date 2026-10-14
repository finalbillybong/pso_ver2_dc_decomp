typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4f1200 S_L8c4f1200;
typedef struct S_L8c4f1200_4 S_L8c4f1200_4;
struct S_L8c4f1200 {
    int f00;
    S_L8c4f1200_4 *f04;
};
extern S_L8c4f1200 g_8c4f1200;
extern void call_8c12b77c(int, void *, int);
int operation_8c1f9f84(int a0, int a1, int a2)
{
    int v1;
    v1 = (int)(&g_8c4f1200)->f00;
    if ((&g_8c4f1200)->f00 >= a2) {
        v1 = (int)a2;
    }
    call_8c12b77c(a1, (void *)((&g_8c4f1200)->f04), v1);
    (&g_8c4f1200)->f00 -= v1;
    (&g_8c4f1200)->f04 = (S_L8c4f1200_4 *)((int)(&g_8c4f1200)->f04 + v1);
    return (int)(v1);
}
