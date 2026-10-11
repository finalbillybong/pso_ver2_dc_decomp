typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x7c];
    int f7c;
    int f80;
};
int get_field_8c2163fc(Object *o)
{
    return o->f7c > o->f80;
}
