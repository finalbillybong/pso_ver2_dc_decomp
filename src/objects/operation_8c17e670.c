typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c17e670(Object *o)
{
    int v2;
    unsigned int v1;
    int v3;
    int v4;
    unsigned int v5;
    v4 = -0x12477ce0;
    v1 = 0;
    v5 = 0x1550;
    v2 = -1;
    for (; v5 > v1; v1++) {
        v2 ^= *(unsigned char *)((char *)o + v1);
        for (v3 = 0; 8 > v3; v3++) {
            if (v2 & 1) {
                v2 = (unsigned int)v2 >> 1 ^ v4;
            } else {
                v2 = (unsigned int)v2 >> 1;
            }
        }
    }
    return -1 ^ v2;
}
