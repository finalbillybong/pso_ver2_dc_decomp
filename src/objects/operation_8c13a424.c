typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c177748(int);
extern int operation_8c01c25c(void);
extern void operation_8c206d8c(int);
extern int call_8c17796c(int);
void operation_8c13a424(void)
{
    int t1;
    int t2;
    operation_8c177748(0x2a);
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        operation_8c206d8c(0);
        return;
    }
    t2 = call_8c17796c(0x2f);
    if (t2 != 0) {
        operation_8c206d8c(2);
        return;
    }
    operation_8c206d8c(1);
}
