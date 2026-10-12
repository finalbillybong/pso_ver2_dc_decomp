typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c1fa76a(void);
int operation_8c03661c(void)
{
    int t1;
    if (*(int *)0x8c462008 != 0) {
        t1 = call_8c1fa76a();
        return t1;
    }
    return 0;
}
