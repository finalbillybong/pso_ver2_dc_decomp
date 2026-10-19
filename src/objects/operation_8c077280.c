typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a48 S_g8c469a48;
extern int g_8c469a44;
extern S_g8c469a48 *g_8c469a48;
extern int call_8c18de4c(int);
void operation_8c077280(void)
{
    int v1;
    int t1;
    int t2;
    t1 = call_8c18de4c(0x2000);
    g_8c469a44 = (int)(t1);
    t2 = call_8c18de4c(0x40);
    g_8c469a48 = (S_g8c469a48 *)(int)(t2);
    v1 = (int)0;
    while (v1 != 0x10) {
        *(int *)((char *)((char *)g_8c469a48 + 0x0) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
}
