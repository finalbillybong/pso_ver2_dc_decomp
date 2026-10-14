typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern void load_resource_small(void *, void *);
void operation_8c0e8ddc(void)
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
    load_resource_small((void *)((void *)0x8c308394), (void *)((void *)0x8c308334));
    *(void **)0x8c470320 = (void *)0x8c308334;
}
