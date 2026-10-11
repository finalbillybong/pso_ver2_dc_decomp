typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
struct S_g8c4db9e0 {
    char unknown0[0x3a0];
    char f3a0;
};
int get_field_8c0353d4(void)
{
    return (*(S_g8c4db9e0 **)0x8c4db9e0)->f3a0 == -1;
}
