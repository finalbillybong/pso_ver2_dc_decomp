typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_45a8c(void *);
extern void operation_8c0d00d0(void *);
int operation_8c0d0078(int a0)
{
    int t1;
    t1 = operation_45a8c((void *)a0);
    if (t1 != 0) {
        operation_8c0d00d0((void *)a0);
        return 1;
    }
    return 0;
}
