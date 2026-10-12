typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c434(void);
int operation_8c03f6e4(void)
{
    int t1;
    t1 = call_8c01c434();
    if (t1 == 0) {
        return 0x1e;
    }
    return 0x14;
}
