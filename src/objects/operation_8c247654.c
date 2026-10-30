typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c247654(Object *o)
{
    int v1;
    char fill;
    v1 = 0;
    fill = -1;
    while (0x13 > v1) {
        *(char *)((char *)((char *)o + 0x48) + ((short)v1)) = fill;
        v1 = v1 + 1;
    }
}
