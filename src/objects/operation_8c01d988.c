typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    int f00;
    int f04;
    int f08;
    int f0c;
};
extern char g_8c41cd04;
extern char g_8c41cd05;
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c36b024(int);
extern void call_8c36a950(void);
void operation_8c01d988(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    t1 = call_8c36b024(0);
    (&g_8c41cba0)->f00 = t1;
    t2 = call_8c36b024(6);
    (&g_8c41cba0)->f04 = t2;
    t3 = call_8c36b024(0xc);
    (&g_8c41cba0)->f08 = t3;
    t4 = call_8c36b024(0x12);
    (&g_8c41cba0)->f0c = t4;
    call_8c36a950();
    g_8c41cd04 = 0;
    g_8c41cd05 = 0;
}
