typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void load_resource_small(void *, void *);
void operation_8c1afd1c(void)
{
    load_resource_small((void *)((void *)0x8c326010), (void *)((void *)0x8c326004));
    *(void **)0x8c4e2360 = (void *)0x8c326004;
}
