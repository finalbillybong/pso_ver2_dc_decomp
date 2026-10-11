typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2340 S_g8c4e2340;
struct S_g8c4e2340 {
    char unknown0[0x20];
    float f20;
    float f24;
    char f28;
    char f29;
    char f2a;
    char unknown2b[0x1];
    int f2c;
    int f30;
};
void operation_8c1afb2c(int a0)
{
    if (*(int *)0x8c4e2340 != 0) {
        (*(S_g8c4e2340 **)0x8c4e2340)->f30 = a0;
        (*(S_g8c4e2340 **)0x8c4e2340)->f20 = 255.0f;
        (*(S_g8c4e2340 **)0x8c4e2340)->f24 = 70.0f;
        (*(S_g8c4e2340 **)0x8c4e2340)->f28 = 0;
        (*(S_g8c4e2340 **)0x8c4e2340)->f29 = 0;
        (*(S_g8c4e2340 **)0x8c4e2340)->f2a = 0;
        (*(S_g8c4e2340 **)0x8c4e2340)->f2c = 2;
    }
}
