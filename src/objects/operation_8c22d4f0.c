typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c22d4f0(Object *o, unsigned int a1)
{
    int v2;
    unsigned int v1;
    int v3;
    int k;
    k = -0x12477ce0;
    v1 = (unsigned int)0;
    v2 = (int)-1;
    while (a1 > v1) {
        v3 = (int)0;
        v2 = (int)(v2 ^ *(unsigned char *)((char *)((char *)o + 0x0) + (v1)));
        while (8 > v3) {
            if (((v2 & 1)) != 0) {
                v2 = (int)((unsigned int)v2 >> 1 ^ k);
            } else {
                v2 = (int)((unsigned int)v2 >> 1);
            }
            v3 = (int)(v3 + 1);
        }
        v1 = (unsigned int)(v1 + 1);
    }
    return -1 ^ v2;
}
