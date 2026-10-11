typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x18];
    int f1c;
};
void set_fields_8c21f628(Object *o, int a1)
{
    o->f1c &= -0x1e1;
    o->f1c |= a1 << 5;
    o->tag |= 1;
}
