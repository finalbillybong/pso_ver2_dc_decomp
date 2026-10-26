typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c03b55c(Object *o, int a1)
{
    if (a1 < 0 || a1 >= 0xd) {
        return 0;
    }
    return (int)(*(int *)((char *)((char *)o + 0x0) + (a1 << 2)));
}
