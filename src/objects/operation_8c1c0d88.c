typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2_0 S_vv2_0;
extern void destroy_node_array(void *, short);
void operation_8c1c0d88(void)
{
    int v1;
    int v2;
    v1 = (int)4;
    while (v1 >= 0) {
        v2 = (int)(v1 << 2);
        if (*(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4e2cb0))) != 0) {
            destroy_node_array((void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4e2cb0)))), (short)1);
            *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4e2cb0))) = 0;
        }
        v1 = (int)(v1 + -1);
    }
}
