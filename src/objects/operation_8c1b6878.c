typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c1adf74(void *);
extern int call_8c1ae1a4(int);
extern void call_8c1ae0ac(int, int);
void operation_8c1b6878(int a0)
{
    int t1;
    int t2;
    t1 = operation_8c1adf74((void *)a0);
    if (t1 == 0) {
        t2 = call_8c1ae1a4(a0);
        if (t2 == 0) {
            return;
        }
    }
    call_8c1ae0ac(a0, 5);
}
