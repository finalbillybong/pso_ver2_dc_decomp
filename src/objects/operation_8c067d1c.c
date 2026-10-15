typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46891c S_g8c46891c;
struct S_g8c46891c {
    char unknown0[0x4];
    float f04;
};
float operation_8c067d1c(void)
{
    return (*(S_g8c46891c **)0x8c46891c)->f04 * 0.666f;
}
