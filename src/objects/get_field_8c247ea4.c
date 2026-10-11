typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int get_field_8c247ea4(int a0)
{
    return (a0 & 0x1f) << 3 | ((a0 & 0x7c00) << 9 | -0x1000000 | (a0 & 0x3e0) << 6);
}
