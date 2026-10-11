typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
struct S_g8c4e2b80 {
    char unknown0[0x430];
    S_g8c4e2b80_430 *f430;
};
int operation_8c1beb7c(int a0)
{
    return *(int *)((char *)((char *)(*(S_g8c4e2b80 **)0x8c4e2b80)->f430 + 0x4) + (a0 << 3));
}
