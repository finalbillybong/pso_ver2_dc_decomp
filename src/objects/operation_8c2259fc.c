typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5060c0 S_g8c5060c0;
typedef struct S_vv1_0 S_vv1_0;
extern S_g8c5060c0 *g_8c5060c0;
extern char g_8c5060c8[];
extern void call_8c122774(void *, void *);
extern void call_8c388984(int, void *, int);
void operation_8c2259fc(int a0)
{
    int v1;
    v1 = (int)(a0 << 2);
    if (*(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)g_8c5060c8))) != 0) {
        call_8c122774(g_8c5060c0, (void *)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((int)((void *)g_8c5060c8)))));
        *(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)g_8c5060c8))) = 0;
        if (0x1d > a0) {
            call_8c388984((int)(v1 + g_8c5060c8), (void *)(&*(int *)((char *)g_8c5060c8 + (a0 + 1 << 2))), (int)((unsigned int)0x1d - a0 << 2 >> 2));
        }
        *(int *)(g_8c5060c8 + 0x74) = 0;
    }
}
