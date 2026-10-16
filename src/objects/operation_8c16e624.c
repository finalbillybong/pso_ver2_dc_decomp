typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1_0 S_vv1_0;
extern void call_8c09e188(int, int, void *);
void operation_8c16e624(int a0)
{
    char *v1;
    int v2;
    int v3;
    v1 = (char *)*(int *)0x8c4db408;
    v2 = (int)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    v3 = (int)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2));
    call_8c09e188(v2, v3, (void *)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2))));
}
