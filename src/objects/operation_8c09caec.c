typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c46ec20;
extern int g_8c46ec24;
extern int g_8c46ec28;
extern int g_8c46ec2c;
extern int call_8c18de4c(int);
extern void call_8c12b880(int, int, int);
void operation_8c09caec(void)
{
    int t1;
    g_8c46ec24 = 0;
    g_8c46ec28 = 0;
    g_8c46ec2c = 0;
    t1 = call_8c18de4c(0x20000);
    g_8c46ec20 = (int)(t1);
    call_8c12b880(t1, 0, 0x20000);
}
