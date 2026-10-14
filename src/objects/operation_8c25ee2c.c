typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c238f80(void);
extern int call_8c238260(void);
int operation_8c25ee2c(void)
{
    int t1;
    int t2;
    t1 = operation_8c238f80();
    if (t1 == 0) {
        t2 = call_8c238260();
        if (!(1 >= t2)) {
            goto L_8c25ee48;
        }
    }
    return 0;
L_8c25ee48:;
    return 1;
}
