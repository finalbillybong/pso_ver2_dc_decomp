typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c24a6c8(Object *o)
{
    int v1;
    v1 = (int)0;
    while (8 > v1) {
        *(int *)((char *)((char *)o + 0x138) + (v1 * 0x18)) = 0;
        v1 = (int)(v1 + 1);
    }
}
