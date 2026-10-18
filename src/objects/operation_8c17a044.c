typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x3];
    Arg0_13c *f13c;
};
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
void operation_8c17a044(Object *o)
{
    float v5;
    v5 = 1.0f;
    switch (o->f138) {
    case 0:
        v5 = 1.05f;
        break;
    case 1:
        v5 = 1.1f;
        break;
    case 2:
        v5 = 1.15f;
        break;
    case 3:
        v5 = 1.2f;
        break;
    }
    ((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08 = v5;
}
