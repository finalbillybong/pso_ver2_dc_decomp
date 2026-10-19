typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c1811a0(void);
extern void operation_8c01c1a4(int);
void operation_8c1e6a9c(void)
{
    int t1;
    t1 = call_8c1811a0();
    if (t1 != 6) {
        operation_8c01c1a4(2);
        return;
    }
    operation_8c01c1a4(0x10);
}
