typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x6576_0 S_x6576_0;
extern void mark_effect_for_release(void *);
void operation_8c1b82cc(int a0)
{
    int v2;
    int v1;
    int v3;
    v1 = (int)0x400;
    v2 = (int)0;
    while (0xd > v2) {
        v3 = (int)(v2 << 2);
        if (*(int *)((char *)((char *)(a0 + v1) + 0x0) + (v3)) != 0) {
            mark_effect_for_release((void *)(*(S_x6576_0 **)((char *)((char *)(a0 + v1) + 0x0) + (v3))));
            *(int *)((char *)((char *)(a0 + v1) + 0x0) + (v3)) = 0;
        }
        v2 = (int)(v2 + 1);
    }
}
