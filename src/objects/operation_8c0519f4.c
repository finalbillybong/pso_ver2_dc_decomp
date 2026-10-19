typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_456a4(void *);
extern void operation_8c051a4c(void *);
int operation_8c0519f4(int a0)
{
    int t1;
    t1 = operation_456a4((void *)a0);
    if (t1 != 0) {
        operation_8c051a4c((void *)a0);
        return 1;
    }
    return 0;
}
