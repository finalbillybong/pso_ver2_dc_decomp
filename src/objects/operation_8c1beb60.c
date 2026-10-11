typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
};
int operation_8c1beb60(int a0)
{
    return *(int *)((char *)((char *)(*(S_g8c4e2b80 **)0x8c4e2b80)->f42c + 0x8) + (a0 << 4));
}
