typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c04b8b0(int a0)
{
    if ((unsigned int)0x21 > (unsigned int)(unsigned short)a0) {
        return 9;
    }
    return ((unsigned int)(unsigned short)a0 > (unsigned int)0xdf) ? 0x12 : *(int *)((char *)0x8c2f1bf8 + ((unsigned short)(a0 + -0x21) << 2));
}
