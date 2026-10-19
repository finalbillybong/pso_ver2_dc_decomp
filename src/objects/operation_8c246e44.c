typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c246e74(void *);
extern void call_8c246efc(int);
extern void call_8c246fb8(int);
void operation_8c246e44(int a0)
{
    int t1;
    t1 = operation_8c246e74((void *)a0);
    if (t1 != 0) {
        call_8c246efc(a0);
        call_8c246fb8(a0);
    }
}
