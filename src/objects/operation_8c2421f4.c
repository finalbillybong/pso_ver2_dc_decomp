typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c2421f4(int a0)
{
    return ((unsigned int)(unsigned short)a0 >= (unsigned int)0xc) ? 0 : *(int *)((char *)0x8c510c10 + ((unsigned short)a0 << 2));
}
