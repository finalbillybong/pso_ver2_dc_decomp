typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
extern int operation_8c02c194(void);
extern void call_8c3a944a(int);
extern void call_8c3aa716(int);
void operation_8c02a998(int a0)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c01c25c();
    if (t1 != 0xf) {
        t2 = call_8c01c25c();
        if (t2 != 0x10) {
            goto L_8c02a9c6;
        }
    }
    t3 = operation_8c02c194();
    if (t3 != 0) {
        call_8c3a944a(a0);
        return;
    }
L_8c02a9c6:;
    call_8c3aa716(a0);
}
