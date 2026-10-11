typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c04b888(int a0)
{
    if ((unsigned int)0x41 > (unsigned int)(unsigned short)a0) {
        return 0;
    }
    if ((unsigned int)(unsigned short)a0 > (unsigned int)0x7a) {
        return 0;
    }
    if ((unsigned int)(unsigned short)a0 >= (unsigned int)0x61) {
        return 1;
    }
    return (unsigned int)0x5a >= (unsigned int)(unsigned short)a0;
}
