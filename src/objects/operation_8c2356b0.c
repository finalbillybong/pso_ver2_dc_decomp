typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    char f20;
    char f21;
};
void operation_8c2356b0(Object *o)
{
    o->f21 = *(unsigned char *)((char *)0x8c2e1e40 + (o->f20));
}
