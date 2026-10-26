typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x78];
    int f78;
};
int operation_8c215dbc(Object *o)
{
    return (int)(o->f78);
}
