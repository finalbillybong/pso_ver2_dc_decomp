typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c02cc0c(Object *o, int a1, int a2)
{
    *(char *)((char *)((char *)o + 0x404) + ((short)a2)) = a1;
}
