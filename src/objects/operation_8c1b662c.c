typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c03d338(void);
extern void call_8c1ae010(int, int);
void operation_8c1b662c(int a0)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 0) {
        call_8c1ae010(a0, 1);
    }
}
