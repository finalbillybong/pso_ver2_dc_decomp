typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
int operation_8c0de180(Object *o)
{
    unsigned int v1;
    v1 = (unsigned int)0;
    while ((unsigned int)4 > v1) {
        if (*(int *)((char *)((char *)o + 0x5c) + (v1 << 2)) == 0) {
            break;
        }
        v1 = (unsigned int)(v1 + 1);
    }
    return (int)(v1);
}
