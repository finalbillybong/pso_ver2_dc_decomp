typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_1abf30(void *, void *, void *);
extern void call_8c1ac06c(int, int, int);
int operation_8c1ab92c(int a0, int a1, int a2)
{
    int t1;
    t1 = operation_1abf30((void *)a0, (void *)a1, (void *)a2);
    if (t1 != 0) {
        call_8c1ac06c(t1, 0x1bb, 0);
    }
    return (int)(t1);
}
