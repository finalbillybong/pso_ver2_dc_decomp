typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
int operation_8c25aa74(void)
{
    int t1;
    t1 = call_8c01c25c();
    if (t1 == 0x10) {
        return *(int *)0x8c41bd10;
    }
    return 0;
}
