typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c238e7c(int);
extern int call_8c2382b0(void);
int operation_8c238420(int a0)
{
    int t1;
    int t2;
    if (a0 != 0) {
        t1 = operation_8c238e7c(a0);
        if (t1 == 0) {
            goto L_8c238438;
        }
    }
    return 0;
L_8c238438:;
    t2 = call_8c2382b0();
    return t2 << 0x10 | t2 ^ (unsigned short)a0;
}
