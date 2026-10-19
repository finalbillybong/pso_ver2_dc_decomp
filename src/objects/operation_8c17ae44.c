typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c172c30(void *, int, int);
void operation_8c17ae44(int a0)
{
    int v1;
    int v2;
    v1 = (int)-0x38e;
    v2 = (int)-0x1c71;
    operation_8c172c30((void *)(a0 + 0x234), v1, v2);
    operation_8c172c30((void *)(a0 + 0x238), -0x38e, -0x238e);
}
