typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x358];
    int f390;
    char unknown394[0x10];
    int f3a4;
};
void set_fields_8c128bb0(Object *o)
{
    o->f3a4 &= -0x10000001;
    o->f34 &= -0x6040001;
    o->f390 = 0xb;
}
