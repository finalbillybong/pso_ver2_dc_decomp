typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d5a30 S_g8c4d5a30;
typedef struct S_vv2_0 S_vv2_0;
extern void call_8c122774(void *, void *);
void operation_8c1031e4(void)
{
    int v1;
    int v2;
    v1 = (int)0x11;
    while (v1 >= 0) {
        v2 = (int)(v1 << 2);
        if (*(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4d59e8))) != 0) {
            call_8c122774((void *)(*(S_g8c4d5a30 **)0x8c4d5a30), (void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4d59e8)))));
            *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4d59e8))) = 0;
        }
        v1 = (int)(v1 + -1);
    }
}
