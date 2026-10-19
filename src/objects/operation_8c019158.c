typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41c7c0 S_g8c41c7c0;
struct S_g8c41c7c0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c41c7c0 *g_8c41c7c0;
void operation_8c019158(void)
{
    g_8c41c7c0->f04 |= 1;
}
