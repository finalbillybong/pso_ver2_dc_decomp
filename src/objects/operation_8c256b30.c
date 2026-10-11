typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513320 S_g8c513320;
struct S_g8c513320 {
    char unknown0[0x4];
    short f04;
};
void operation_8c256b30(void)
{
    if (*(int *)0x8c513320 != 0) {
        (*(S_g8c513320 **)0x8c513320)->f04 |= 1;
    }
}
