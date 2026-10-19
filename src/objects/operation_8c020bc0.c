typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned short tag;
    char unknown2[0x2];
    int f04;
};
Object *operation_8c020bc0(Object *o)
{
    o->tag = 0xffff;
    o->f04 = 0;
    return o;
}
