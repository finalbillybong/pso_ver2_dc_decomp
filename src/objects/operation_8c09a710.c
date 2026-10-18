typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cba0 S_g8c41cba0;
struct S_g8c41cba0 {
    char unknown0[0x18];
    unsigned short f18;
};
extern S_g8c41cba0 *g_8c41cba0;
float operation_8c09a710(void)
{
    return (float)g_8c41cba0->f18 / 255.0f;
}
