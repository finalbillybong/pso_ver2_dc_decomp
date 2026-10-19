typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d81ec S_g8c4d81ec;
struct S_g8c4d81ec {
    char unknown0[0x24];
    int f24;
};
extern int g_8c4d81e4;
extern int g_8c4d81e8;
extern S_g8c4d81ec *g_8c4d81ec;
extern void call_8c220b80(int, int);
void operation_8c112e40(void)
{
    call_8c220b80(0x1a, 1);
    g_8c4d81e4 = 0x19;
    g_8c4d81e8 = 2;
    g_8c4d81ec->f24 = 6;
}
