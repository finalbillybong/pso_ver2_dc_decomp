typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c33860c[];
extern void load_resource_small(void *, void *);
void operation_8c22f180(void)
{
    load_resource_small((void *)((g_8c33860c + 0x2b)), (void *)((void *)0x8c3385b0));
    *(void **)0x8c506520 = (void *)0x8c3385b0;
}
