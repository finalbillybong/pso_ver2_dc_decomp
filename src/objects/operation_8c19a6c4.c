typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c31cbf0[];
extern void load_resource_small(void *, void *);
void operation_8c19a6c4(void)
{
    load_resource_small((void *)((g_8c31cbf0 + 0x1d)), (void *)((void *)0x8c31cb94));
    *(void **)0x8c4dc480 = (void *)0x8c31cb94;
}
