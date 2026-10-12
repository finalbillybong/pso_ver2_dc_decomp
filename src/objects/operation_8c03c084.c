typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c03c084(Object *o)
{
    int v1;
    v1 = (int)0;
    while (4 > v1) {
        *(char *)((char *)((char *)o + 0x0) + (v1)) = 0;
        v1 = (int)(v1 + 1);
    }
    return (int)(o);
}
