typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c0f8008(Object *o)
{
    int v1;
    v1 = (int)0;
    while (4 > v1) {
        if (*(int *)((char *)((char *)o + 0x3d4) + (v1 << 3)) == 1) {
            return 0;
        }
        v1 = (int)(v1 + 1);
    }
    return 1;
}
