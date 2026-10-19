typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c184cf8(Object *o)
{
    int v2;
    int v1;
    v2 = (int)0;
    v1 = (int)0xffff;
    while (4 > v2) {
        *(short *)((char *)((char *)o + 0x98) + (v2 << 2)) = v1;
        *(short *)((char *)((char *)o + 0x9a) + (v2 << 2)) = 0;
        v2 = (int)(v2 + 1);
    }
}
