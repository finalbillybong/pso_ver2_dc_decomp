typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469d80 S_L8c469d80;
typedef struct S_g8c469d80 S_g8c469d80;
struct S_L8c469d80 {
    S_g8c469d80 *f00;
    int f04;
};
struct S_g8c469d80 {
    char unknown0[0x8];
    int f08;
};
extern int g_8c3fc180;
extern int g_8c469d88;
extern S_L8c469d80 g_8c469d80;
extern int call_8c18e768(int, int);
void operation_8c08a548(void)
{
    int t1;
    (&g_8c469d80)->f00 = (void *)0x8c3053a8;
    (&g_8c469d80)->f04 = 0x10;
    t1 = call_8c18e768((&g_8c469d80)->f00->f08 - g_8c3fc180, 0x44);
    g_8c469d88 = t1;
}
