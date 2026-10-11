typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int get_field_8c1407a4(int a0, int a1, int a2, int a3)
{
    return a3 **(int *)((char *)0x8c314728 + (a1 << 2)) + *(int *)((char *)0x8c314760 + (a1 << 2)) + a2;
}
