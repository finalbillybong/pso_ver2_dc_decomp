typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa4];
    float fa4;
};
void set_fields_8c225b14(Object *o)
{
    o->fa4 += 6.0f;
}
