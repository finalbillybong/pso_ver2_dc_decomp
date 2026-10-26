typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
char operation_8c2393ac(Object *o, int a1)
{
    if (*(char *)((char *)((char *)o + 0x20) + (a1)) < 0 || *(char *)((char *)((char *)o + 0x20) + (a1)) > 0x14) {
        *(char *)((char *)((char *)o + 0x20) + (a1)) = 0;
    } else {
    }
    return *(char *)((char *)((char *)o + 0x20) + (a1));
}
