typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x53c];
    int f53c;
};
void set_fields_8c117e20(Object *o)
{
    o->f53c |= 1;
}
