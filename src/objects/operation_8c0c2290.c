typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_456a4(void *);
extern void operation_8c0c22bc(void *);
int operation_8c0c2290(int a0)
{
    int t1;
    t1 = operation_456a4((void *)a0);
    if (t1 != 0) {
        operation_8c0c22bc((void *)a0);
        return 1;
    }
    return 0;
}
