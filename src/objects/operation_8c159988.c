typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaf4 S_g8c4daaf4;
struct S_g8c4daaf4 {
    char unknown0[0x24];
    int f24;
};
extern S_g8c4daaf4 *g_8c4daaf4;
extern void call_8c220c40(int, int);
void operation_8c159988(void)
{
    call_8c220c40(0x19, 1);
    g_8c4daaf4->f24 = 4;
}
