typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec20 S_g8c46ec20;
extern S_g8c46ec20 *g_8c46ec20;
extern int g_8c46ec24;
extern int g_8c46ec28;
extern int g_8c46ec2c;
extern void call_8c12b880(void *, int, int);
void operation_8c09cb48(void)
{
    g_8c46ec24 = 0;
    g_8c46ec28 = 0;
    call_8c12b880(g_8c46ec20, 0, 0x20000);
    g_8c46ec2c = 1;
}
