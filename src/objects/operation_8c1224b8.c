typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d878c S_g8c4d878c;
struct S_g8c4d878c {
    char unknown0[0x40];
    int f40;
};
int operation_8c1224b8(void)
{
    return (int)((*(S_g8c4d878c **)0x8c4d878c)->f40);
}
