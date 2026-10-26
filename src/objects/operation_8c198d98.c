typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c198d98(Object *o, int a1)
{
    return (int)(*(int *)((char *)((char *)o + 0x20) + (a1 << 2)));
}
