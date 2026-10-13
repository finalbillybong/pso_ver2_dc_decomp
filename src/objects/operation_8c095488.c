typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e10 S_g8c469e10;
typedef struct S_g8c469e10_42c S_g8c469e10_42c;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    int f38;
};
struct S_g8c469e10 {
    char unknown0[0x42c];
    S_g8c469e10_42c *f42c;
};
struct S_g8c469e10_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
void operation_8c095488(Object *o)
{
    o->f38 = (int)((*(S_g8c469e10 **)0x8c469e10)->f42c->f18);
    o->f28 = (int)((*(S_g8c469e10 **)0x8c469e10)->f42c->f1c);
}
