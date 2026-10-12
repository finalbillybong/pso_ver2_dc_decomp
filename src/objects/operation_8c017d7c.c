typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
void operation_8c017d7c(void)
{
    if (*(int *)0x8c4d59d8 != 0) {
        (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 |= 0x10;
    }
}
