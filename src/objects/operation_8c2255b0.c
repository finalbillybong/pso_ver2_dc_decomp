typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5060c0 S_g8c5060c0;
typedef struct S_g8c5060c4 S_g8c5060c4;
typedef struct S_vv2_0 S_vv2_0;
extern void call_8c122774(void *, void *);
extern void operation_8c1226d0(void *, int);
void operation_8c2255b0(void)
{
    int v1;
    int v2;
    v1 = (int)0x1d;
    while (v1 >= 0) {
        v2 = (int)(v1 << 2);
        if (*(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c5060c8))) != 0) {
            call_8c122774((void *)(*(S_g8c5060c0 **)0x8c5060c0), (void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c5060c8)))));
            *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c5060c8))) = 0;
        }
        v1 = (int)(v1 + -1);
    }
    if (*(int *)0x8c5060c4 != 0) {
        call_8c122774((void *)(*(S_g8c5060c0 **)0x8c5060c0), (void *)(*(S_g8c5060c4 **)0x8c5060c4));
        *(int *)0x8c5060c4 = 0;
    }
    operation_8c1226d0((void *)(*(S_g8c5060c0 **)0x8c5060c0), 1);
    *(int *)0x8c5060c0 = 0;
}
