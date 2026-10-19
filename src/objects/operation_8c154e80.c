typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c154e80(Object *o)
{
    int v1;
    v1 = (int)0;
    while (3 > v1) {
        *(short *)((char *)0x8c4da868 + (v1 << 1)) = *(short *)((char *)((char *)o + 0x6) + (v1 << 1));
        v1 = (int)(v1 + 1);
    }
}
