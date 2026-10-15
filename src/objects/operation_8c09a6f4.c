typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cba0 S_g8c41cba0;
struct S_g8c41cba0 {
    char unknown0[0x1a];
    unsigned short f1a;
};
float operation_8c09a6f4(void)
{
    return (float)(*(S_g8c41cba0 **)0x8c41cba0)->f1a / 255.0f;
}
