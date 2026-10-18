typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char unknown0[0x4];
    int f04;
};
extern char g_8c340468[];
extern void clear_hierarchy_groups(void *);
extern void call_8c380516(void);
void operation_8c25ca3c(void)
{
    int v1;
    S_vv2 *v2;
    char *v5;
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    v1 = (int)6;
    v2 = (S_vv2 *)(g_8c340468 + 0x30);
    while (v1 >= 0) {
        v5 = (char *)v2->f04;
        v2--;
        if (v5 != 0) {
            ((void (*)(void))(v5))();
        }
        v1 = (int)(v1 + -1);
    }
    call_8c380516();
}
