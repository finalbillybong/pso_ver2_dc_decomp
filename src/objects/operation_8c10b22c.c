typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0x8];
    int f08;
};
extern int g_8c4d7ca0;
extern char g_8c30bcb0[];
extern void clear_global_8c10ae9c(void);
extern void clear_global_8c220b28(void);
void operation_8c10b22c(void)
{
    S_vv2 *v2;
    int v1;
    v1 = (int)7;
    v2 = (S_vv2 *)(g_8c30bcb0 + 0x8c);
    while (v1 > 0) {
        v2 = (S_vv2 *)((char *)v2 + -20);
        ((void (*)(void))(v2->f08))();
        v1 = (int)(v1 + -1);
    }
    g_8c4d7ca0 = 0;
    clear_global_8c10ae9c();
    clear_global_8c220b28();
}
