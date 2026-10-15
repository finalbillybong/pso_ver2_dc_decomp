typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbbec S_g8c4dbbec;
typedef struct S_vv2_0 S_vv2_0;
extern void call_8c122774(void *, void *);
void operation_8c186c2c(void)
{
    int v1;
    int v2;
    v1 = (int)0x11;
    while (v1 >= 0) {
        v2 = (int)(v1 << 2);
        if (*(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4dbba0))) != 0) {
            call_8c122774((void *)(*(S_g8c4dbbec **)0x8c4dbbec), (void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4dbba0)))));
            *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4dbba0))) = 0;
        }
        v1 = (int)(v1 + -1);
    }
}
