typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c575570;
extern void call_8c38c0f0(int);
extern void call_8c38c0e6(int, int);
void operation_8c0d8a34(int a0)
{
    g_8c575570 |= 0x820;
    call_8c38c0f0((int)(a0 + 0x44c));
    call_8c38c0e6(0xff00, 0x800);
}
