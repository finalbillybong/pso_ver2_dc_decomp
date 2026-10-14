typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern int g_8c44be04;
extern int g_8c510ba4;
extern char g_8c2efd40[];
extern void load_resource_small(void *, void *);
extern void call_8c05f87c(void *);
void operation_8c03f14c(void)
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
    load_resource_small((void *)((g_8c2efd40 + 0x9e)), (void *)((void *)0x8c2ef540));
    g_8c510ba4 = 0;
    g_8c44be04 = 0;
    call_8c05f87c((void *)((g_8c2efd40 + 0xad)));
}
