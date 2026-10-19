typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_459d8(void *);
extern void operation_8c07b258(int);
int operation_8c07b22c(int a0)
{
    int t1;
    t1 = operation_459d8((void *)a0);
    if (t1 != 0) {
        operation_8c07b258(a0);
        return 1;
    }
    return 0;
}
