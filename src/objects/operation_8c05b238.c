typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
int operation_8c05b238(int a0)
{
    int v1;
    int v2;
    v2 = (int)0;
    if ((unsigned int)(unsigned short)a0 >= (unsigned int)0x1000) {
        v1 = (int)0;
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)a0) {
            v1 = (int)1;
        }
        v2 = (int)v1;
    }
    return v2;
}
