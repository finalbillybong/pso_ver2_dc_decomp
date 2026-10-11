typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c051fd4(Object *o)
{
    int v1;
    v1 = (int)0;
    while (0x10 > v1) {
        *(int *)((char *)((char *)o + 0x94) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
}
