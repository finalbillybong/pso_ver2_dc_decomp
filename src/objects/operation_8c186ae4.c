typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4dbbe8;
extern int g_8c4dbbf0;
extern char g_8c319ad4[];
extern void operation_8c186b40(void);
extern void call_8c369eb8(void *);
void operation_8c186ae4(void)
{
    int v1;
    v1 = (int)0;
    while (0x12 > v1) {
        *(int *)((char *)0x8c4dbba0 + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    g_8c4dbbe8 = -1;
    g_8c4dbbf0 = 0;
    operation_8c186b40();
    call_8c369eb8((void *)((g_8c319ad4 + 0x12)));
}
