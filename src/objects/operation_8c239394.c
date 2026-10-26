typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
void operation_8c239394(Object *o, int a1, int a2)
{
    int v3;
    if ((char)a1 < 0 || (char)a1 > 0x14) {
        v3 = (int)0x14;
    } else {
        v3 = (int)a1;
    }
    *(char *)((char *)((char *)o + 0x20) + (a2)) = v3;
}
