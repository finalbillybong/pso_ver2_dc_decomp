typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fc40 S_L8c46fc40;
typedef struct S_g8c46fc40 S_g8c46fc40;
struct S_L8c46fc40 {
    S_g8c46fc40 *f00;
    int f04;
};
struct S_g8c46fc40 {
    char unknown0[0x8];
    int f08;
};
extern int g_8c3fc180;
extern int g_8c46fc48;
extern S_L8c46fc40 g_8c46fc40;
extern int call_8c18e768(int, int);
void operation_8c0d0318(void)
{
    int t1;
    (&g_8c46fc40)->f00 = (void *)0x8c3053a8;
    (&g_8c46fc40)->f04 = 0x10;
    t1 = call_8c18e768((&g_8c46fc40)->f00->f08 - g_8c3fc180, 0x44);
    g_8c46fc48 = t1;
}
