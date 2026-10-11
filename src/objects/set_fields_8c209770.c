typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
};
void set_fields_8c209770(Object *o)
{
    o->tag &= -0x40001;
    o->tag |= 0x40000;
}
