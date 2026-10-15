typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern char g_8c337268[];
extern void load_resource_large(void *, void *);
void operation_8c221888(void)
{
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    if (*(int *)0x8c4703c0 != 0 && *(int *)0x8c4703c0 != 1) {
        if (*(int *)0x8c4703c0 == 2) {
            goto L_8c2218d0;
        }
        if (*(int *)0x8c4703c0 == 3) {
            goto L_8c2218e2;
        }
        return;
    }
    load_resource_large((void *)((g_8c337268 + 0x1d6)), (void *)((void *)0x8c337100));
    return;
L_8c2218d0:;
    load_resource_large((void *)((g_8c337268 + 0x1e7)), (void *)((void *)0x8c3371b0));
    return;
L_8c2218e2:;
    load_resource_large((void *)((g_8c337268 + 0x1f8)), (void *)((void *)0x8c337260));
}
