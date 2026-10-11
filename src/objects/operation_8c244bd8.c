typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510c80 S_g8c510c80;
struct S_g8c510c80 {
    char unknown0[0x20];
    int f20;
};
int operation_8c244bd8(void)
{
    int v1;
    int v2;
    if (*(int *)0x8c510c80 != 0) {
        v2 = (int)1;
        if ((*(S_g8c510c80 **)0x8c510c80)->f20 != 1) {
            v1 = (int)1;
            if ((*(S_g8c510c80 **)0x8c510c80)->f20 != 2) {
                v1 = (int)0;
            }
            v2 = (int)v1;
        }
        return v2;
    }
    return 0;
}
