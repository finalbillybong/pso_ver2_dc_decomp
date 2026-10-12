typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c462ce4;
extern int g_8c462cf0;
extern char g_8c462cf4;
extern int call_8c011e9c(int);
extern void set_fields_8c1a7ddc(void);
void operation_8c03e2c0(void)
{
    int t1;
    t1 = call_8c011e9c(0x40000);
    g_8c462ce4 = t1;
    set_fields_8c1a7ddc();
    g_8c462cf0 = 1;
    g_8c462cf4 = 0;
}
