typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
struct S_L8c339ca0 {
    int f00;
    char unknown4[0x10];
    int f14;
};
extern S_L8c339ca0 g_8c339ca0;
extern int call_8c238320(int);
void operation_8c247f6c(int a0)
{
    int v3;
    int t1;
    if (a0 < 0 || a0 >= 0x24) {
        v3 = (int)0;
    } else {
        v3 = (int)a0;
    }
    if (v3 >= 9) {
        (&g_8c339ca0)->f00 = 9;
        t1 = call_8c238320(v3 + -9);
        (&g_8c339ca0)->f14 = t1;
        return;
    }
    (&g_8c339ca0)->f00 = v3;
    (&g_8c339ca0)->f14 = 0;
}
