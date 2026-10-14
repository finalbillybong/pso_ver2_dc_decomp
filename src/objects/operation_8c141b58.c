typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c141d50(void *);
extern void call_8c140d50(int, int, float);
void operation_8c141b58(int a0, int a1, float f0)
{
    operation_8c141d50((void *)a0);
    call_8c140d50(a0, a1, f0);
}
