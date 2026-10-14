typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c21f87c(void *);
extern void operation_8c21f8bc(void *);
extern void call_8c0db30c(int);
void operation_8c21f814(int a0)
{
    operation_8c21f87c((void *)a0);
    operation_8c21f8bc((void *)a0);
    call_8c0db30c(a0);
}
