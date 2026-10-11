typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int get_field_8c247ed8(int a0)
{
    return (unsigned int)(unsigned int)(a0 & 0xf80000) >> 8 >> 1 | (unsigned int)(unsigned int)(unsigned int)(a0 & 0xf800) >> 2 >> 2 >> 2 | (unsigned int)(unsigned int)(a0 & 0xf8) >> 2 >> 1;
}
