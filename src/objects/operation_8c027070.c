typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x454];
    unsigned short f454;
};
int operation_8c027070(Object *o)
{
    char *p;
    p = (char *)o + 0x418;
    p += (o->f454 & 0xffff) << 2;
    return (int)(p + 0x48);
}
