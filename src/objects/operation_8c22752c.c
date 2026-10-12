typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_g8c4db9e8 {
    char unknown0[0x3214];
    unsigned char f3214;
};
int operation_8c22752c(void)
{
    int v2;
    if (*(int *)0x8c4db9e8 == 0) {
        return 0;
    }
    v2 = (int)((((*(S_g8c4db9e8 **)0x8c4db9e8)->f3214 & 0xf)) != 0);
    return v2;
}
