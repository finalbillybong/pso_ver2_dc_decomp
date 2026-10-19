typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db138 S_g8c4db138;
struct S_g8c4db138 {
    char unknown0[0x24];
    int f24;
};
extern S_g8c4db138 *g_8c4db138;
extern void call_8c220b80(int, int);
void operation_8c15c720(void)
{
    call_8c220b80(0x19, 1);
    g_8c4db138->f24 = 2;
}
