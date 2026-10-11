typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned char f68;
    char unknown69[0x7];
    int f70;
    int f74;
    int f78;
};
void operation_8c1d5d3c(Object *o)
{
    int v1;
    int v2;
    o->f68 |= 1;
    v1 = (int)0x68;
    if (o->f78 != 0) {
        o->f70 = o->f78;
        return;
        v1 = (int)0x70;
    }
    v2 = (int)v1;
    if (o->f74 != 0) {
        o->f70 = o->f74;
        return;
        v2 = (int)0x70;
    }
    *(char *)((char *)((char *)o + 0x0) + (v2)) = (unsigned int)o->f68 >> 1 << 1;
    o->f70 = 0;
}
