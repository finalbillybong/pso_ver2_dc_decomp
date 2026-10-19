typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c504a00 S_g8c504a00;
struct S_g8c504a00 {
    char unknown0[0x24];
    int f24;
    char unknown28[0xc];
    int f34;
};
extern S_g8c504a00 *g_8c504a00;
extern void call_8c220c40(int, int);
void operation_8c208ca0(void)
{
    if (g_8c504a00 != 0) {
        call_8c220c40(0xc, 1);
        g_8c504a00->f24 = 0xa;
        g_8c504a00->f34 = 2;
    }
}
