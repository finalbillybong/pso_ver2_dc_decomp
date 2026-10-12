typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2 Arg2;
struct Arg2 {
    int f00;
};
extern int operation_8c1571f4(void *);
extern void call_8c1f1c00(int, int);
void operation_8c1d43fc(int a0, int a1, Arg2 *a2)
{
    int t1;
    if (a0 != 0 && a1 != 0) {
        t1 = operation_8c1571f4((void *)a0);
        if (t1 != a2->f00) {
            a2->f00 = t1;
            call_8c1f1c00(a1, t1);
        }
    }
}
