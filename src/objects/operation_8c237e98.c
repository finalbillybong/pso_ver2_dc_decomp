typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c339ca0[];
extern void call_8c24ff18(int, int);
void operation_8c237e98(int a0, int a1)
{
    int v1;
    if (a1 < 0 || a1 >= 0x25) {
        return;
    }
    v1 = (int)*(int *)(g_8c339ca0 + 0x4c);
    if (v1 != a1) {
        call_8c24ff18(a0, a1);
        *(int *)(g_8c339ca0 + 0x4c) = a1;
    }
}
