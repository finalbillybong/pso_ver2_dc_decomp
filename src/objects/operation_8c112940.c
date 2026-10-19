typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d81cc S_g8c4d81cc;
struct S_g8c4d81cc {
    char unknown0[0x24];
    int f24;
};
extern int g_8c4d81c4;
extern int g_8c4d81c8;
extern S_g8c4d81cc *g_8c4d81cc;
extern void call_8c220b80(int, int);
void operation_8c112940(void)
{
    call_8c220b80(0x1a, 1);
    g_8c4d81c4 = 0x19;
    g_8c4d81c8 = 2;
    g_8c4d81cc->f24 = 7;
}
