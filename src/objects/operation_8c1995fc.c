typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
struct Object {
    char unknown0[0x80];
    char f80;
    char f81;
    char unknown82[0x2];
    Arg0_84 *f84;
};
int operation_8c1995fc(Object *o)
{
    return (int)(&*(int *)((char *)((char *)o->f84 + 0x0) + (o->f80 + o->f81 * 3 << 2)));
}
