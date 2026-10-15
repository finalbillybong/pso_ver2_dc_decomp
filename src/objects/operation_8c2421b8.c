typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
void operation_8c2421b8(int a0, int a1)
{
    if ((unsigned short)a0 == 0xffff || (unsigned int)(unsigned short)a1 >= (unsigned int)0xc || (unsigned int)(unsigned short)a0 >= (unsigned int)0xc) {
        return;
    }
    *(int *)((char *)0x8c510be0 + ((unsigned short)a1 << 2)) += 1;
    *(int *)((char *)0x8c510c40 + ((unsigned short)a0 << 2)) = (unsigned short)a1;
}
