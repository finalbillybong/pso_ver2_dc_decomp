typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    unsigned short f3c;
};
int operation_8c026058(Object *o)
{
    return (int)(((char *)o + (o->f3c << 2) + 0x48));
}
