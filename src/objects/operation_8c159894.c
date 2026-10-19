typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaf4 S_g8c4daaf4;
struct S_g8c4daaf4 {
    char unknown0[0x24];
    int f24;
    char unknown28[0x14];
    int f3c;
};
extern S_g8c4daaf4 *g_8c4daaf4;
extern void call_8c220c40(int, int);
void operation_8c159894(void)
{
    call_8c220c40(6, 1);
    g_8c4daaf4->f3c = 2;
    g_8c4daaf4->f24 = 5;
}
