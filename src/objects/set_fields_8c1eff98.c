typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2e0];
    float f318;
    float f31c;
    float f320;
};
void set_fields_8c1eff98(Object *o)
{
    o->f34 &= -0x10001;
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
}
