typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern char g_8c32bda4[];
extern void load_resource_small(void *, void *);
void operation_8c1e6050(void)
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
    load_resource_small((void *)((g_8c32bda4 + 0x7c)), (void *)((void *)0x8c32bbf8));
}
