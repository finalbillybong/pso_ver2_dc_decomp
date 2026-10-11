typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e];
    char size;
};
void operation_8c137d18(Object *o, int a1, int a2)
{
    if (0xa > o->size) {
        *(short *)((char *)((char *)o + 0x0) + (o->size << 1)) = a1;
        *(char *)((char *)((char *)o + 0x14) + (o->size)) = a2;
        o->size += 1;
    }
}
