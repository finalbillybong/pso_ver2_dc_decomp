typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
extern void call_8c1a70ac(int, int);
extern void call_8c17777c(int);
void operation_8c177748(int a0)
{
    int t1;
    t1 = call_8c01c25c();
    if (t1 == 0x10) {
        call_8c1a70ac(a0, 0);
        return;
    }
    call_8c17777c(a0);
}
