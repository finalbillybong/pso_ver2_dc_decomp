typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_vv1_0 S_vv1_0;
extern int call_8c248070(int, int, void *);
void operation_8c170c30(int a0, int a1)
{
    char *v1;
    int v2;
    int v3;
    int t1;
    v1 = (char *)*(int *)0x8c4db408;
    v2 = (int)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    v3 = (int)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    t1 = call_8c248070(v2, v3, (void *)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 1;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a1 << 2)) = 0;
}
