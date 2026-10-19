typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c237bd0(void *);
extern void operation_8c237d58(int);
extern void operation_8c237ed0(void *);
void operation_8c237b9c(int a0)
{
    int t1;
    t1 = operation_8c237bd0((void *)a0);
    if (t1 == 0) {
        operation_8c237d58(a0);
        operation_8c237ed0((void *)a0);
    }
}
